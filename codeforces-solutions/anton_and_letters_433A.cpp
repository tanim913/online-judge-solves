#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string x;
    getline(cin, x);
    set <char> s;

    for (int i = 0; i<x.size(); i++)
    {
        if(x[i]>='a' && x[i]<='z')
        {
            s.insert(x[i]);
        }
    }
    cout << s.size() << endl;

    return 0;
}
