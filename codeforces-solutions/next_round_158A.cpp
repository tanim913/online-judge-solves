#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[50],num,score,cnt = 0;
    cin>> num>> score;
    for(int i=0; i<num; i++)
    {
        cin>> ar[i];

    }

    for(int i=0; i<num; i++)
    {
        if(ar[i]>0 && ar[i]>=ar[score-1])
        {
            cnt++;
        }

    }
    cout<<cnt<<endl;
    return 0;
}

