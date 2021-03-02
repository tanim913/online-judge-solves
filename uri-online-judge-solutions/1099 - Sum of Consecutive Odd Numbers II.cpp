#include <bits/stdc++.h>
using namespace std;

int main ()
{

    int n,high,low,temp;
    int sum=0;
    cin>>n;

    while (n--)
    {
        cin>>high>>low;
        if (low>high)
        {
            temp=high;
            high=low;
            low=temp;
        }
        for (int i = low+1 ; i<high ; i++ )
        {
            if (i%2==1||i%2==-1)
            {
                sum+=i;
            }

        }
        cout<<sum<<endl;
        sum=0;
    }
}
