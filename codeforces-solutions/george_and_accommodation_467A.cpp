#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, p,q, counter = 0;
    cin >> n;
    for(int i = 0; i<n ; i++)
    {
        cin >> p;
        cin >> q;
        if(q-p >= 2)
        {
            counter ++;
        }
    }
    cout << counter <<endl;
}
