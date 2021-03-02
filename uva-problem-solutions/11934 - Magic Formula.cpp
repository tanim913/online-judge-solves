#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,x,l,d,cnt,i,j,p,q,fun;

    while(cin>> a >> b >> c >> d >>l)
    {
        cnt = 0;
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
            break;

        for(i = 0; i <= l; i++)
        {
            x = i ;
            fun = a * x * x+b *x + c;
            if(fun % d == 0)
                cnt++;

        }
        cout << cnt <<endl;

    }
    return 0;

}
