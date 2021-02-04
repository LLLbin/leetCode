/*
 * @Author: Lebin
 * @Date: 2020-05-19 10:44:33
 * @LastEditors: Lebin
 * @LastEditTime: 2020-05-20 17:20:50
 * @Description: 
 */ 
/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] ????
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0, right = nums.size() - 1;
        while(left < right)
        {
            while(nums[left]  != val && left < right) 
                left++;
            while(nums[right] == val && right > left)    
                right--;
            if(left < right)  nums[left++]  = nums[right--];
        }
        if(right >= 0 && nums[right] != val) right++;
        if(right < 0) right = 0;
        return right;
    }
};
// @lc code=end

