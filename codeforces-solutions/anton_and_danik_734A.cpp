#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, acount= 0, dcount = 0;
    cin >> n;

    for(int i = 1; i <=n; i++)
    {
        char ch;
        cin >> ch;

        if(ch == 'A')
        {
            acount++;
        }
        if(ch == 'D')
        {
            dcount++;
        }

    }
    if(acount == dcount)
    {
        cout << "Friendship" <<endl;
    }
    if(acount > dcount)
    {
        cout << "Anton" <<endl;
    }
    if(acount < dcount)
    {
        cout << "Danik" <<endl;
    }
    return 0;

}
