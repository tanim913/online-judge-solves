#include <bits/stdc++.h>
using namespace std;

int main ()
{

    string x, z;
    cin >> x;
    cin >> z;

    reverse(x.begin(), x.end());

    if ((x.compare(z)) == 0)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;


}
