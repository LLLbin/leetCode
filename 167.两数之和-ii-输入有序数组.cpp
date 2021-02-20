/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while( i != j )
        {
            if(numbers[i] + numbers[j] > target) --j;
            else if(numbers[i] + numbers[j] < target) ++i;
            else break;
        }
        return vector<int>{i+1, j+1};
    }
};
// @lc code=end

