#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x,y,z,r=0;
    cin >> n;
    for (int i =1 ; i<=n ; i++)
    {
        cin >> x >> y >> z;
        r += ((x+y+z) >= 2);
    }
    cout << r << endl;

    return 0;
}
