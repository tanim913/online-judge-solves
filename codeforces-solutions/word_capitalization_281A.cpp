#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string x ;

    cin >> x;

    if (x[0] >= 'a' && x[0] <= 'z')
    {
        x[0] = x[0] - 32;
    }

    cout << x << endl;
}


