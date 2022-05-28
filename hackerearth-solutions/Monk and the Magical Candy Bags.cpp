#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    long long total =0;
    multiset<long long> bags;

    cin >> t;

    while (t--)
    {
        int n, rep;
        cin >> n >> rep;

        for (int i = 0; i<n; i++)
        {

            long long candy;
            cin >> candy;
            bags.insert(candy);
        }

        for (int i =0 ; i<rep; i++)
        {
            auto last =  (--bags.end());
            long long max_candy = *last;
            total += max_candy;
            bags.erase(last);
            bags.insert(max_candy/2);
        }
    }

    cout << total << endl;
    return 0;

}
