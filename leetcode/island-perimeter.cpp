class Solution {
    int count;
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        if(!rows) return 0;
        int cols= grid[0].size();

        for (int i =0; i<rows; i++)
        {
            for (int j = 0; j<cols; j++)
            {
                if (grid[i][j] == 1)
                {
                    dfs(i,j,grid);
                    break;
                }
            }
        }
        return count;
    }

    void dfs(int i, int j, vector<vector<int>>& grid)
    {
        if (i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] ==0){
            count ++;
            return ;
        }
        if(grid[i][j] == -1)
        {
            return;
        }

        grid[i][j] = -1;

        dfs(i-1,j,grid);
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }
};
