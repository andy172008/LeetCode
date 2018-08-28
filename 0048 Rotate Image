class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int len = matrix.size();
		int temp;
		for (int i = 0; i <= len / 2.0  - 0.5; i++)
		{
			for (int j = 0; j < len / 2.0 - 0.5; j++)
			{
				temp = matrix[i][j];
				matrix[i][j] = matrix[len - 1 - j][i];
				matrix[len - 1 - j][i] = matrix[len - 1 - i][len - 1 - j];
				matrix[len - 1 - i][len - 1 - j] = matrix[j][len - 1 - i];
				matrix[j][len - 1 - i] = temp;

			}
		}
	}
};
