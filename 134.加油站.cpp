/*
 * @lc app=leetcode.cn id=134 lang=cpp
 *
 * [134] 加油站
 */

// @lc code=start
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size(), sum = 0, minSum = INT_MAX, index = 0;
        for(int i = 0; i != n; ++i)
        {
            sum += gas[i] - cost[i];
            if(sum < minSum)
            {
                index = i;
                minSum = sum;
            }
        } 
        return sum >= 0 ? (index + 1)%n : -1; 
    }
};
// @lc code=end

