#include <bits/stdc++.h>
using namespace std;

int theLastDigit (int n)
{
    return n%10;
}
int main ()
{
    int n,k;
    cin >> n >> k;
    for (int i =1; i <= k ; i++)
    {

        if (theLastDigit(n) == 0)
        {
            n = n/10;
        }
        else
        {
            n--;
        }
    }
    cout << n <<endl;

    return 0;
}
