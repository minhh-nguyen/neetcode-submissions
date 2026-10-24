class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let r = []
        for (let i = 0; i<nums.length; i++) {
            for (let j = 0; j<nums.length; j++) {
                if (i != j && nums[i] + nums[j] == target) {
                    r.push(i)
                    r.push(j)
                    return r;
                }
            }
        }
    }
}
