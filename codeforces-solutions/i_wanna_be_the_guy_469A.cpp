#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x, y;
    vector <int> v;
    cin >> n;

    cin >> x;
    for (int i = 0; i<x; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    cin >> y;
    for (int i = x ; i<(x+y); i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());
    v.erase( unique( v.begin(), v.end() ), v.end() );

    if(v.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;


}
