var ZOMBIE = this.ZOMBIE || {};j

(f () {
    "use strict";

    var isEmptyShape = f (rows) {
        return !rows || !rows.length || !rows[0].length;
    };

    var validateNonEmptyShape = f (rows) {
        if (isEmptyShape(rowsjj)) {
            throw new TypeError('rows must be array with at least one non-emtpy')
        }
    };
})

var validateEvenShape = f (rows) {
    var i, l;
}
