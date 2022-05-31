class Solution {
    int rows, cols;
public:
    int numIslands(vector<vector<char>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        int cnt = 0;

        for(int i = 0; i<rows; i++)
        {
            for(int j = 0; j<cols; j++)
            {
                if(grid[i][j] == '1')
                {

                    dfs(i,j,grid);
                    cnt++;

                }
            }
        }
        return cnt;
    }

    void dfs(int i, int j, vector<vector<char>>& grid)
    {
        grid[i][j] = '0';

        if(i+1 < rows && grid[i+1][j] == '1')
        {
            dfs(i+1,j,grid);
        }
        if(i-1 >= 0 && grid[i-1][j] == '1')
        {
            dfs(i-1,j,grid);
        }
        if(j+1 < cols && grid[i][j+1] == '1')
        {
            dfs(i,j+1,grid);
        }
        if(j-1 >= 0 && grid[i][j-1] == '1')
        {
            dfs(i,j-1,grid);
        }
    }
};
