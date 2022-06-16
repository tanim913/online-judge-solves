#include <bits/stdc++.h>
using namespace std;
int main ()
{
    map <int, multiset<string>> marks_map;
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        int marks;
        string names;
        cin >> names >> marks;
        marks_map[-1 * marks].insert(names);
    }

    for(auto std_mark_pr: marks_map)
    {
        auto &name_set = std_mark_pr.second;
        int mark = std_mark_pr.first;
        for (auto student : name_set)
        {
            cout << student << " " << -1 * mark << endl;
        }
    }

    return 0;
}
