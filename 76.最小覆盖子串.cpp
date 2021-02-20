/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 最小覆盖子串
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> chs(128, 0);
        vector<bool> flag(128, false);
        // 先统计T中的字符情况
        for(int i = 0; i != t.size(); ++i)
        {
            ++chs[t[i]];
            flag[t[i]] = true;
        }
        // 移动滑动窗口，不断更新数据
        int cnt = 0, l = 0, min_l = 0, min_size = s.size() + 1;
        for(int i = 0; i != s.size(); ++i)
        {
            if( --chs[s[i]] >= 0 && flag[s[i]] )
                    ++cnt;

            while( cnt == t.size() )
            {
                if( i - l + 1 < min_size )
                {
                    min_l = l;
                    min_size = i - l + 1;
                }
                if( flag[s[l]] && ++chs[s[l]] > 0) --cnt;
                ++l;
            }
        }
        return min_size > s.size() ? "" : s.substr(min_l, min_size);
    }
};
// @lc code=end

