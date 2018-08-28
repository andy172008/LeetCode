class Solution {
public:
	int trap(vector<int>& height) {



		int rs = 0;
		int len = height.size();
		
		if (len < 1)
		{
			return 0;
		}

		vector<int> max_left(len), max_right(len);

		max_left[0] = height[0];
		max_right[len - 1] = height[len - 1];

		for (int i = 1; i < len; i++)
		{
			max_left[i] = max(max_left[i - 1], height[i]);
		}

		for (int i = len - 2; i >= 0; i--)
		{
			max_right[i] = max(max_right[i + 1], height[i]);
		}


		for (int i = 0; i < len; i++)
		{
			rs += min(max_left[i], max_right[i]) - height[i];
		}

		return rs;
	}
};
