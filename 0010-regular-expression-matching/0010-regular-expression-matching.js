/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
var isMatch = function(s, p) {
    const regex = new RegExp(p)
    const match = s.match(regex)

    if (match != null && s == match[0]) {
        return(true)
    } 
    else { 
        return(false) 
    }
};