/**
 * @param {number} n
 * @return {Function} counter
 */
let p;
var createCounter = function(n) {
    p=n;
    p--;
    return function() {
        p++;
        return p;
        
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */