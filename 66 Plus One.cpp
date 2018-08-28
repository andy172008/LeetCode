class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int> rs = digits;
		int pos = rs.size() - 1;
	    rs[pos]++;
		for (pos--; pos >= 0; pos--)
		{
			if (rs[pos + 1] >= 10)
			{
				rs[pos + 1] -= 10;
				rs[pos] += 1;
			}
		}

		if (rs[0] >= 10)
		{
			rs[0] -= 10;
			rs.insert(rs.begin(), 1);
		}
		return rs;
	}
};
