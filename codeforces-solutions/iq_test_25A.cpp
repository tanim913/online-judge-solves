#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    stack<int> st1;
    stack<int> st2;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 1)
        {
            st1.push(i);
        }
        if (x % 2 == 0)
        {
            st2.push(i);
        }
    }

    if (st1.size() < st2.size())
    {
        cout << st1.top() << endl;
    }
    else
    {
        cout << st2.top() << endl;
    }

    return 0;
}
