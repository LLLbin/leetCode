/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> v(nums.size(), 0);
        for(int i = 0; i != nums.size(); ++i)
        {
            if(nums[i] > 0 && nums[i] <= nums.size())
            v[nums[i]-1] = 1;
        }
        for(int i = 0; i != v.size(); ++i)
        {
            if(v[i] == 0)
                return i + 1;
        }
        return nums.size() + 1;
    }
};
// @lc code=end

