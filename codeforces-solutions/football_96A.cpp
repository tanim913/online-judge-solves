#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string x;
    cin >> x;

    if (x.find("0000000") != std::string::npos)
    {
        cout << "YES" << endl;
    }
    else if (x.find("1111111") != std::string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
