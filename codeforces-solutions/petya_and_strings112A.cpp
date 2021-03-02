#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string s;
    string t;

    cin >> s >> t;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    if  (s.compare(t) == 0)
    {
        cout << "0" << endl;
    }
    if (s < t)
    {
        cout << "-1" << endl;
    }
    if (s > t)
    {
        cout << "1" << endl;
    }

    return 0;
}
