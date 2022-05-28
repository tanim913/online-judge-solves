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
        marks_map[marks].insert(names);
    }

    auto &last  = --marks_map.end();

    while(true)
    {

        auto &name_set = last->second;
        int mark = last->first;
        for (auto student : name_set)
        {
            cout << student << " " << mark << endl;
        }
        if (last == marks_map.begin())
        {
            break;
        }
        last --;
    }
    return 0;
}
