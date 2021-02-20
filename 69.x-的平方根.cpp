/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long n = x;
        int l=1, r=n, m, s;
        while(l <= r)
        {
            m = l + (r-l)/2;
            s = x/m;
            if(s == m)
                return m;
            else if(m > s)
                r = m-1;
            else    
                l = m+1;
        }
        return r;
    }
};
// @lc code=end

