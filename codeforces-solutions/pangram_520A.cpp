#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    set<char> s;

    for (int i = 0; i < n; i++)
    {
        x[i] = tolower(x[i]);
        s.insert(x[i]);
    }
    s.size() == 26 ? cout << "YES\n" : cout << "No\n";
    return 0;
}
