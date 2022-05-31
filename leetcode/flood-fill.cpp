#include <bits/stdc++.h>
using namespace std

    void
    DFS(int i, int j, int initial_color, int new_color, vector<vector<int>> &image)
{
    int n = image.size();
    int m = image[0].size();

    if (i < 0 || j < 0)
        return;
    if (i >= n || j >= m)
        return;
    if (image[i][j] != initial_color)
        return;

    image[i][j] = new_color;

    DFS(i - 1, j, initial_color, new_color, image);
    DFS(i + 1, j, initial_color, new_color, image);
    DFS(i, j + 1, initial_color, new_color, image);
    DFS(i, j - 1, initial_color, new_color, image);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int initial_color = image[sr][sc];
    if (initial_color != newColor)
    {
        DFS(sr, sc, initial_color, newColor, image);
    }
    return image;
}

int main()
{
    return 0;
}
