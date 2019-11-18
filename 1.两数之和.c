/*
 * @Author: Lebin
 * @Date: 2019-11-17 02:16:52
 * @LastEditors: Lebin
 * @LastEditTime: 2019-11-18 22:58:51
 * @Description: 
 */
/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Return an array of size *returnSize.//告诉调用者返回的数组的大小
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* res = (int *)malloc(sizeof(int) * 2);
    * returnSize=0;
    for(int i = 0; i < numsSize-1; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums [j] == target) {
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    return res;
}
        


// @lc code=end

