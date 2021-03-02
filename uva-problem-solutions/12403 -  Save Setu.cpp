#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t,a,b,c;
    long long sum=0;
    string s;

    cin>>t;

    while ( t-- )
    {
        cin>>s;
        if(s=="donate")
        {
            cin >> a;
            sum += a;
        }
        else
        {
            cout<< sum <<endl;
        }
    }

    return 0;
}
