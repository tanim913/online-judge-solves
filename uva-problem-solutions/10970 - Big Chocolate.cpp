#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;

    while (cin >> m >> n)
    {
        cout << ((max(m, n)) - 1) * (min(m, n)) + (min(m, n)) - 1 << endl;
    }
}
