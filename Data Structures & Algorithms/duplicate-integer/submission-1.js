class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let hasDup = false
        for (let i = 0; i<nums.length; i++) {
            for (let j = 0; j < nums.length; j++) {
                if (i != j && nums[i] != nums[j]) {
                    hasDup = false
                } else if (j != i && nums[i] == nums[j]) {
                    hasDup = true
                    return hasDup;
                }
            }
        }

        return hasDup
    }
}
