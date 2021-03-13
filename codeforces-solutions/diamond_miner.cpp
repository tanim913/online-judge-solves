#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    for (int i = 1; i<=t; i++)
    {
        int n, x, y ;
        cin >> n;
        vector <long long> a;
        vector <long long> b;

        double sum = 0.0;

        for (int j = 1; j <= 2*n; j++)
        {

            cin >> x >> y;
            if(x == 0)
            {
                b.push_back(abs(y));
            }
            else
            {
                a.push_back(abs(x));
            }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int k = 0; k <n; k++)
        {
            long long z = a[k]*a[k] + b[k]*b[k];
            sum += (double)sqrt(z);
        }

        cout << setprecision(16) <<  sum << endl;

    }
    return 0;
}
