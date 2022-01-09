#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
// or so that there are no complaints about uint8_t or uint64_t
// being an unknown type name.
#include <inttypes.h>

// Global array of bytes. Memory pool of size 64.
// If you try to allocate more than this, something
// bad will happen lol.

static uint8_t MEMORY_POOL[64];

// Not initalizing you homie.

static uint64_t MEMORY_POOL_USED = 0;

// Tracker.
struct free_entry
{
  void *ptr;
  uint64_t size;
};

typedef struct free_entry free_entry_t;

static free_entry_t FREE_LIST[64] =
{
  (free_entry_t) { .ptr = MEMORY_POOL, .size = 64, },
};

static uint64_t FREE_LIST_USED = 1;

free_entry_t *find_free_entry(size_t size)
{
  for (uint64_t i=0; i < FREE_LIST_USED; i++)
  {
    free_entry_t *entry;
    entry = &FREE_LIST[i];

    if (entry-size >= size)
    {
      return entry;
    }
  }

  abort();
}

// Write your own malloc, gosh darn it!
// voids mean nothing. It is a memory address but
// we don't know what is there. Perfect example,
// 64 bit unsigned integer (uint64_t). Just points
// to a offset in memory.

void *malloc(size_t size)
{
  /*
   * 0                            63
   * ==============================
   * SSSSSSSSaaaaSSSSSSSSbbbb
   *         ^           ^
   *         a           b
   */

  size += 8;

  free_entry_t *entry;
  entry = find_free_entry(size);
  void *ptr;
  ptr = entry->ptr;
  
  entry->ptr += size;
  entry->size -= size;

  return ptr;
};

void free(void *ptr)
{
  
  free_entry_t *entry;
  entry = &FREE_LIST[FREE_LIST_USED];

  //entry->ptr = something;
  //entry->size = something;

  FREE_LIST_USED++;
}

int main()
{

  // Remember a char* is a memory address at which
  // there are some characters. However, void* does not
  // imply that there is a memory address where there are
  // some voids.

  char *a;
  char *b;
  char *c;
  char *d;

  a = malloc(4);
  b = malloc(4);
  c = malloc(4);

  strcpy(a, "foo\0");
  strcpy(a, "bar\0");
  strcpy(a, "baz\0");

  // Print strings.
  printf("%s\n", a);
  printf("%s\n", b);
  printf("%s\n", c);

  // Print pointers.
  // Notice these don't differ by 4 like in C++?
  printf("%p\n", a);
  printf("%p\n", b);
  printf("%p\n", c);

  // Free b but assign to d.
  // But will d get b's address?
  free(b);
  d = malloc(4);
  printf("%s\n", d);
  printf("%p\n", d);

  return 0;
}
