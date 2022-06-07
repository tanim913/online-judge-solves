#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin >> t;
    int f[t], s[t];
    for (int i = 0; i<t; i++)
    {
        cin >> f[i] >> s[i];
    }
    for (int i = 0; i<t; i++)
    {
        for(int j =0; j<t; j++)
        {
            if(f[i] == s[j]) c++;
        }
    }
    cout << c << endl;
    return 0;
}
