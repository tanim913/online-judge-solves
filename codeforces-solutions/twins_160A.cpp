#include <bits/stdc++.h>
using namespace std;

bool compare (int a, int b)
{
    if (a>b)
    {
        return true;
    }
    return false;
}
int main ()
{
    int n, sum1 = 0, sum2 = 0, counter = 0;

    cin >> n;

    int ar [n];

    for (int i = 0; i<n; i++)
    {
        cin >> ar[i];
        sum2 += ar[i];


    }
    sort (ar, ar+n, compare);

    for (int i = 0; i<n; i++)
    {
        sum1 += ar[i];
        sum2 -= ar[i];
        counter ++;

        if(sum1 > sum2)
        {
            break;
        }

    }

    cout  << counter << endl;

    return 0;

}
