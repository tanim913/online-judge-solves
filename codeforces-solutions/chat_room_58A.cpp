#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a , b = "hello" ;
    int cnt = 0;
    cin >> a;

    for (int i = 0, j = 0 ;  i < a.size(); i++)
    {
        if(a[i] == b[j])
        {
            cnt ++;
            j++;
        }
    }

    cnt == 5 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;

}
