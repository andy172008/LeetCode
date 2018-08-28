class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int len = nums.size();
		if (len <= 1)
		{
			return len;
		}
		int now_num = nums[0];
		int now_pos = 0;

		for (int i = 1; i < len; i++)
		{
			if (nums[i] == now_num)
			{
				continue;
			}
			now_pos++;
			nums[now_pos] = nums[i];
			now_num = nums[i];
		}
		return now_pos + 1;

	}
};
