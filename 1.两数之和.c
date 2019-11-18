/*
 * @Author: Lebin
 * @Date: 2019-11-17 02:16:52
 * @LastEditors: Lebin
 * @LastEditTime: 2019-11-18 21:46:11
 * @Description: 
 */
/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0 ; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnSize[0] = nums[i];
                returnSize[1] = nums[j];
                return returnSize;
            }
        }
    }
    return 0;
}
        


// @lc code=end

