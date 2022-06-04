class Solution {
    int rows;
    int cols;

public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        rows = heights.size();
        cols = heights[0].size();

        vector <vector <int>> result;
        if (rows < 1) return result;

        vector<vector<int>> pacific (rows, vector<int>(cols,0));
        vector<vector<int>> atlantic (rows, vector<int>(cols,0));

        for (int c = 0; c< cols; c++)
        {
            dfs(heights, 0, c, INT_MIN, pacific);
            dfs(heights, rows-1, c, INT_MIN, atlantic);
        }

        for (int r = 0; r< rows; r++)
        {
            dfs(heights, r, 0, INT_MIN, pacific);
            dfs(heights, r, cols-1, INT_MIN, atlantic);
        }

        for (int i = 0; i< rows; i++)
        {
            for(int j = 0; j<cols; j++)
            {
                if(pacific[i][j] ==  -1 && atlantic[i][j] ==  -1)
                {
                    vector <int> v (2);
                    v[0] = i;
                    v[1] = j;
                    result.push_back(v);
                }
            }
        }
        return result;

    }

    void dfs (vector<vector<int>>& heights, int i, int j, int previous, vector<vector<int>>& ocean)
    {
        rows = heights.size();
        cols = heights[0].size();

        if(i<0 || j<0 || i >= rows || j >= cols) return;
        if(ocean[i][j] == -1) return;
        if(previous > heights[i][j]) return;

        ocean[i][j] = -1;

        dfs(heights, i+1, j, heights[i][j], ocean);
        dfs(heights, i-1, j, heights[i][j], ocean);
        dfs(heights, i, j+1, heights[i][j], ocean);
        dfs(heights, i, j-1, heights[i][j], ocean);


    }
};
