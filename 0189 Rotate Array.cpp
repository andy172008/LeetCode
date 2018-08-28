#include<iostream>
using namespace  std;
#include<vector>
#include<map>
#include<cmath>

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		int count = 0;		
		int pos = 0;
		//存放被覆盖的数字
		int temp1;
		//存放覆盖的数字
		int temp2;

		for (int i = 0; count < nums.size(); i++)
		{
			pos = i;
			temp2 = nums[((pos - k) % len + len) % len];
			do
			{
				temp1 = nums[pos];
				nums[pos] = temp2;
				temp2 = temp1;
				pos = (pos + k) % len;
				count++;
			} while (pos != i);
		}
	}
};

