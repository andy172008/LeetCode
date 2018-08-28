class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		int m, n;
		m = grid.size();
		n = grid[0].size();

		
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				//第一行
				if (i == 0)
				{
					if (j == 0)
					{
						continue;
					}
					else
					{
						grid[i][j] += grid[i][j - 1];
					}
				}
				else
				{
					if (j == 0)
					{
						grid[i][j] += grid[i - 1][j];
					}
					else
					{
						grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
					}
				}
			}
		}

		return grid[m - 1][n - 1];
	}
};
