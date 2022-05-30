#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        string ar;
 
        cin >> ar;
 
        for (int i = 0; i<n-1; i++)
        {
            if(i%2 == 0)
            {
                if(ar[i] != ar[i+1])
                {
                    cnt++;
                }
            }
        }
 
        cout <<cnt << endl;
    }
    return 0;
}