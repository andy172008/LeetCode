class Solution 
{
public:
	vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
	{
		map<char, char> table,table2;
		vector<string> rs;
		int flag;
		for (int pos = 0; pos < words.size(); pos++)
		{
			table.clear();
			table2.clear();
			flag = 1;
			if (words[pos].length() != pattern.length())
			{
				continue;
			}

			for (int i = 0; i < pattern.length(); i++)
			{
				if (table2.find(pattern[i]) != table2.end())
				{
					if (table[words[pos][i]] != pattern[i])
					{
						flag = 0;
						break;
						
					}
					if (table2[pattern[i]] != words[pos][i])
					{
						flag = 0;
						break;
					}

				}
				else
				{
					if (table.find(words[pos][i]) != table.end())
					{
						flag = 0;
						break;
					}
					table[words[pos][i]] = pattern[i];
					table2[pattern[i]] = words[pos][i];
				}
			}
			if (flag == 1)
			{
				rs.push_back(words[pos]);
			}
		}

		return rs;
	}
};
