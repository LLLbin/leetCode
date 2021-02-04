/*
 * @lc app=leetcode.cn id=299 lang=cpp
 *
 * [299] 猜数字游戏
 */

// @lc code=start
class Solution {//lebin原创，牛逼！！！！！！
public:
    string getHint(string secret, string guess) {
        int *arr1 = new int [10]();
        int *arr2 = new int [10]();
        int Bulls = 0,  Cows = 0;
        for(int i = 0; i != secret.size(); ++i)
        {
            if(secret[i] == guess[i])
                ++Bulls;
            else
            {
                ++arr1[static_cast<int>(secret[i]-'0')];
                ++arr2[static_cast<int>(guess[i]-'0')];
            }
        }
        for(int i = 0; i != 10; ++i)
            Cows += arr1[i] > arr2[i] ? arr2[i] : arr1[i];
        return to_string(Bulls) + "A" + to_string(Cows) + "B";
    }

};
// @lc code=end

