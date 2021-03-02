#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int high , low , temp,sum=0;

    for (;;)
    {
        cin>>high>>low;
        if(high<=0||low<=0)
        {
            break;
        }
        else if (low>high)
        {
            temp=high;
            high=low;
            low=temp;
        }
        for(int i = low; i<=high; i++)
        {
            sum+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
        sum=0;
    }

}
