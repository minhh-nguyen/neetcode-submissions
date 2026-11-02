class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> m;
        int c = 0;
        for (int i = 0; i<nums.size(); i++) {
            m.insert(nums[i]);
            c++;
            if (m.size() != c) return true;
        }
        return false;
    }
};