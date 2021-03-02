#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i,n,j,ck = 0;
    long long int a,b,c,aa,bb,cc;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;

        printf("Case %d: ",++ck);

        if(a + b <= c || b + c <= a || c + a <= b)
        {
            cout << "Invalid" << endl;
        }

        else if(a == b && b == c)
        {
            cout<< "Equilateral" <<endl;
        }

        else if(a == b || b == c || c == a)
        {
            cout << "Isosceles" << endl;
        }

        else
        {
            cout << "Scalene" << endl;
        }
    }
    return 0;
}
