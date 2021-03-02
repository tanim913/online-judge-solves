
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x = 0;
    int n;
    string s;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;

        if( s.compare("++X") == 0 || s.compare("X++") == 0 )
        {
            x+=1;
        }

        if( s.compare("--X") == 0 || s.compare("X--") == 0)
        {
            x-=1;
        }

        x=x;
    }

    cout  << x << endl;

    return 0;
}
