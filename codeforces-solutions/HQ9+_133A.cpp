#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    int flag =0;
    cin >> x;

    for( int i =0; i<x.length(); i++)
    {
        if(x[i] ==  'H' || x[i] ==  'Q' || x[i] ==  '9')
        {
            flag  = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
