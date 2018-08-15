class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> rs;
		int i, j;
		i = 0;
		j = 0;
		for (i = 0; i < nums.size(); i++)
		{
			for (j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					rs.push_back(i);
					rs.push_back(j);
					return rs;
				}
			}
		}
	}
};
