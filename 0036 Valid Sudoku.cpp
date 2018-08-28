static const auto io_sync_off = [] () {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		map<int, int> row[9],col[9],box[9];
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (board[i][j] >= '1' && board[i][j] <= '9')
				{
					//检查行
					if (row[i][board[i][j] - '0'] == 1)
					{
						return false;
					}
					row[i][board[i][j] - '0'] = 1;

					//检查列
					if (col[j][board[i][j] - '0'] == 1)
					{
						return false;
					}
					col[j][board[i][j] - '0'] = 1;

					int box_num = 3 * (i/3) + (j/3);

					if (box[box_num][board[i][j] - '0'] == 1)
					{
						return false;
					}
					box[box_num][board[i][j] - '0'] = 1;

				}
			}
		}

		return true;

	}
};
