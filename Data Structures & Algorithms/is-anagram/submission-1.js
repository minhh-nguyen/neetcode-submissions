class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        const sChar = s.split("").sort()
        const tChar = t.split("").sort()

        const a = [...new Set(sChar)]
        const b = [...new Set(tChar)]

        if (s.length != t.length) {
            return false;
        }

        for (let i = 0; i<sChar.length; i++) {
            if (sChar[i] != tChar[i]) {
                return false;
            } 
        }

        return true
    }
}
