#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double a,b,n;
    cin>>n;
    for (;n--;)
    {
        cin>>a>>b;
        if(b==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else  {
            printf("%.1lf\n",a/b);

        }

    }
    return 0;
}
