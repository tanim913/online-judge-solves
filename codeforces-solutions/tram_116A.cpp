#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,cap = 0, current = 0 ;
    cin >> n;

    for (int i = 1 ; i<=n; i++)
    {
        cin >> a >> b;

        current -= a;
        current += b;

        cap = max(cap,current);

    }
    cout  << cap << endl;
    return 0;

}
