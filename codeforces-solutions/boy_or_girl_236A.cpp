#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,count=0,i;

    string s;

    cin>>s;

    l=s.length();

    sort(s.begin(),s.end());

    for (i = 1; i<l; i++)
    {
        if (s[i] != s[i -1] )

        {
            count++;
        }

    }
    if((count+1)%2==0)

    {
        printf("CHAT WITH HER!\n");
    }

    else

    {
        printf("IGNORE HIM!\n");
    }

    return 0;

}
