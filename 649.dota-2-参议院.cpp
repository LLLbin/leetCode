/*
 * @lc app=leetcode.cn id=649 lang=cpp
 *
 * [649] Dota2 参议院
 */

// @lc code=start
class Solution {
public:
    string predictPartyVictory(string senate) {
	string result;
	int D_cnt = 0, R_cnt = 0;
	vector<int> arr;
	for(int i = 0; i != senate.size(); i++)
	{
		arr.push_back(1);
		if(senate[i] == 'R')
			R_cnt++;
		else
			D_cnt++;
	}
	while(R_cnt && D_cnt)
	{
		for(int i = 0; i != senate.size(); i++)
		{
			if(arr[i] && senate[i] == 'R')
			{
				if(--D_cnt == 0) break;
				if(senate.find('D', i+1) != senate.npos)
					arr[senate.find('D', i+1)] = 0;
			}
			if(arr[i] && senate[i] == 'D')
			{
				if(--R_cnt == 0) break;
				if(senate.find('R', i+1) != senate.npos)
					arr[senate.find('R', i+1)] = 0;
			}
		}
	}

	if(R_cnt == 0)
		result = "Dire";
	else
		result = "Radiant";

	return result;
}
    }
};
// @lc code=end

