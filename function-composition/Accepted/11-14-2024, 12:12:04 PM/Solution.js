// https://leetcode.com/problems/function-composition

/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    
    return function(x) {
        
        functions = functions.reverse();
        functions.forEach(fn =>{
            x = fn(x);
        })

        return x;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */