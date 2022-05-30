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
 
        char segment_head = '.';
        int operation  = 0;
        int segment =0;
 
        for (int i=0; i<n; i+=2)
        {
            if(ar[i] == ar[i+1])
            {
                if(segment_head != ar[i])
                {
                    segment_head = ar[i];
                    segment ++;
                }
            }
            else
            {
                operation ++;
            }
        }
        if(segment == 0)
        {
            segment++;
        }
 
        cout << operation << " " << segment << endl;
 
 
    }
    return 0;
}