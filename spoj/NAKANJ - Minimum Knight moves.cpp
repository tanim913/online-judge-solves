#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9+10;
bool vis[8][8];
int lvl[8][8];

int get_x(string x)
{
    return x[0] - 'a'; // removing 'a' from aplhabet char to know the nth letter, counting from 0 index
}

int get_y(string x)
{
    return x[1] - '1'; // removing '1' from numeric char to know the nth number, counting from 0 index
}

bool valid (int x, int y)
{
    return (x>=0 && y>=0 && x<8 && y<8);
}

vector <pair <int,int>> directions =
{
    {-1,2}, {1,2}, {-1,-2}, {1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1}
};

int bfs(string source, string dest)
{
    int src_x = get_x(source);
    int src_y = get_y(source);
    int dest_x = get_x(dest);
    int dest_y = get_y(dest);

    queue <pair<int,int>> q;
    q.push({src_x, src_y});
    vis[src_x][src_y] = true;
    lvl[src_x][src_y] = 0;

    while(!q.empty())
    {
        pair<int, int> p = q.front();
        int x = p.first, y = p.second;
        q.pop();

        for (auto dir : directions)
        {
            int dir_x = dir.first + x;
            int dir_y = dir.second + y;

            if(!valid(dir_x, dir_y))continue;

            if(!vis[dir_x][dir_y])
            {
                q.push({dir_x, dir_y});
                lvl [dir_x][dir_y] = lvl[x][y] + 1;
                vis[dir_x][dir_y] = true;
            }
        }
        if(lvl[dest_x][dest_y] != inf) break;

    }
    return lvl[dest_x][dest_y];

}
void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for(int j = 0; j<8; j++)
        {

            vis[i][j] = false;
            lvl[i][j] = inf;

        }
    }

}
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        reset();
        string src, dest;
        cin >> src >> dest;
        cout << bfs(src, dest) << endl;
    }
    return 0;
}
