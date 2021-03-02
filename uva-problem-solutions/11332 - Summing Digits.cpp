#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,last = 0,sum = 0;
    while(true)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        sum = 0;
        last = 0;
        while(true)
        {
            sum = 0;
            last = 0;
            while(n != 0)
            {
                last = n % 10;
                sum += last;
                n = n / 10;
            }
            if(sum <= 9)
            {
                break;
            }
            else
            {
                n = sum;
            }
        }
        cout<< sum <<endl;
    }
    return 0;
}
