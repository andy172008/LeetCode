class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int rs = 0;

		for (int i = 0; i < S.length(); i++)
		{
			if (J.find(S[i]) != string::npos)
			{
				rs++;
			}
		}

		return rs;

	}
};
