/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid;
        while(start <= end)
        {
            mid = (start + end) / 2;
            if(nums[mid] == target)             // 找到值
                return true;
            if(nums[start] == nums[mid])       // 无法判断
                ++start;
            else if(nums[start] <= nums[mid])  // 左边区域
            {
                if(nums[start] <= target && target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else if(nums[mid] <= nums[end])    // 右边区域
            {
                if(nums[mid] < target && target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return false;
    }
};
// @lc code=end

