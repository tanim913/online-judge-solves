class Solution
{
    int rows, cols;
    vector<vector<int>> mem;
    int directions[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

    bool valid(int i, int j)
    {
        return (i >= 0 && i < rows && j >= 0 && j < cols);
    }

    int long_path(vector<vector<int>> &matrix, int i, int j)
    {
        if (mem[i][j])
            return mem[i][j];
        int max_dir_path = 0;
        for (auto dir : directions)
        {
            int dir_i = i + dir[0];
            int dir_j = j + dir[1];

            if (valid(dir_i, dir_j) && matrix[i][j] < matrix[dir_i][dir_j])
            {
                max_dir_path = max(max_dir_path, long_path(matrix, dir_i, dir_j));
            }
        }
        mem[i][j] = 1 + max_dir_path;
        return mem[i][j];
    }

public:
    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        rows = matrix.size();
        if (rows == 0)
            return 0;
        cols = matrix[0].size();

        mem = vector<vector<int>>(rows, vector<int>(cols));

        int max_path = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                max_path = max(max_path, long_path(matrix, i, j));
            }
        }
        return max_path;
    }
};
