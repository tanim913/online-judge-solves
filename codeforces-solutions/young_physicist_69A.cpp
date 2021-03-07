#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum_a =0, sum_b =0, sum_c =0, a, b, c;
    cin >>n;
    for (int i =1; i<= n; i++)
    {
        cin >> a >> b >> c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
    }
    if (sum_a == 0 && sum_b == 0 && sum_c == 0)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }

}
