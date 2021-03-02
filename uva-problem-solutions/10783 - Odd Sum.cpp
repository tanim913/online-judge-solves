#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,a,b;
    cin >> t;
    for(int T = 0; T < t; T++)
    {

        cin >> a >> b;
        int sum = 0;
        for(int i = a; i <= b; i++)
        {
            if(i%2)
                sum+=i;
        }
        cout << "Case " << T+1 << ": " << sum << endl;
    }
    return 0;
}
