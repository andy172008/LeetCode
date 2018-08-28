class Solution {
public:
	vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
		int ca = 0, cb = 0;
		map<int, int> ma, mb;
		vector<int> ans;

		for (int i = 0; i < A.size() ; i++)
		{
			ca += A[i];
			ma[A[i]] = 1;
		}
		for (int j = 0; j < B.size() ; j++)
		{
			cb += B[j];
		}

		for (int j = 0; j < B.size() ; j++)
		{
			if (ma[(ca - cb) / 2 + B[j]] == 1)
			{
				ans.push_back((ca - cb) / 2 + B[j]);
				ans.push_back(B[j]);
				return ans;
			}
		}
	}
};
