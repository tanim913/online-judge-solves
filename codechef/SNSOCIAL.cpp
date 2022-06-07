#include <bits/stdc++.h>
using namespace std;

const int n = 1e3+10;
const int inf = 1e9+10;
int val[n][n];
bool visited [n][n];
int lvl [n][n];
int r, c;

vector <pair <int,int>> dir =
{
    {1,0},{0,1},{0,-1},{-1,0},{-1,-1},{-1,1},{1,-1},{1,1}
};

bool valid(int i, int j)
{
    return i>=0 && j>=0 && i<r && j<c ;
}

int bfs()
{
    int mx = 0;
    for(int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            mx = max(mx, val[i][j]);
        }
    }
    queue <pair<int,int>> q;
    for(int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            if(mx == val[i][j])
            {
                q.push({i,j});
                visited[i][j] = true;
                lvl[i][j] = 0;
            }
        }
    }
    int ans = 0;
    while(!q.empty())
    {
        auto curr = q.front();
        int x = curr.first, y = curr.second;
        q.pop();

        for (auto d: dir)
        {
            int dir_x = d.first + x;
            int dir_y = d.second + y;

            if (!valid(dir_x, dir_y))
                continue;

            if(!visited[dir_x][dir_y])
            {
                q.push({dir_x,dir_y});
                visited[dir_x][dir_y] = true;
                lvl [dir_x][dir_y] = lvl[x][y] + 1;
                ans = max (ans, lvl [dir_x][dir_y]);

            }
        }

    }
    return  ans;
}

void reset()
{
    for(int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            visited[i][j] = false;
            lvl[i][j] = inf;
        }
    }

}

int main ()
{
    int t;
    cin>> t;

    while (t--)
    {
        reset();
        cin >> r >> c;
        for(int i = 0; i<r; i++)
        {
            for (int j = 0; j<c; j++)
            {
                cin >> val[i][j];
            }
        }

        cout << bfs() << endl;
    }

    return 0;
}
