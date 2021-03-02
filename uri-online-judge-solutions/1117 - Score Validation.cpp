#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double a,sum=0,n=0;

    for (;;)
    {
            cin>>a;
            if(n==2)break;
            else if(a>=0&&a<=10)
            {
                sum+=a;
                n++;
            }
             else
                printf("nota invalida\n");
    }
        printf("media = %.2lf\n",sum/2.00);
        sum=0;

    return 0;
}
