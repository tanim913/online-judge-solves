#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e5+10;

vector <pair<int,int>> graph[N];
vector <int> lvl (N, INF);
int v, e;

int bfs()
{
    deque <int> q;
    q.push_back(1);
    lvl[1] = 0;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop_front();

        for(auto child : graph [curr])
        {
            int child_ver = child.first;
            int wt = child.second;
            if(lvl[curr] + wt < lvl[child_ver]) ///(lvl[curr] + wt) is the level of child note. it can be INF or 0.
            {
                lvl[child_ver] = lvl[curr] + wt;
                wt == 1 ? q.push_back(child_ver) : q.push_front(child_ver);
            }
        }
    }
    return lvl[v] == INF ? -1: lvl[v];
}
int main ()
{
    cin >> v >> e;

    for (int i = 0; i< e; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back({y,0});
        graph[y].push_back({x,1});
    }

    cout << bfs() << endl;
    return 0;

}
