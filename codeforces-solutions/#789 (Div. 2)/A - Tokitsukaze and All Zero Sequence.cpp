#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t, zero = 0;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> ar (n);
 
        for (int i = 0; i<n; i++)
        {
            cin >> ar[i];
        }
 
        int result = 0;
        zero = count(ar.begin(), ar.end(),0);
 
        if(zero == 0)
        {
            sort(ar.begin(), ar.end());
            for (int i = 0; i<n-1; i++)
            {
                if (ar[i+1] == ar[i])
                {
                    result ++;
                    zero ++;
                    break;
                }
            }
            if(zero == 0)
            {
                result +=2;
                zero ++;
            }
        }
 
        result +=  (n-zero);
 
        cout << result << endl;
 
    }
    return 0;
}