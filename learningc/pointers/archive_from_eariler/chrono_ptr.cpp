#include <iostream>
#include <chrono>


int main()
{
	std::chrono::minutes m(11);

	m *= 2;

	m += std::chrono::hours(10); // hours implicitly converted to minutes.

	std::cout << m.count() << " minutes equals "
												 << std::chrono::duration_cast<std::chrono::hours>(m).count()
												 << " hours and ";

	m %= std::chrono::hours(1);

	std::cout << m.count() << " minutes\n";

	return 0;
}
