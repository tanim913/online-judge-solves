#include <bits/stdc++.h>
using namespace std;

string toUpperString (string x)
{
    string y = "";
    for (int i = 0; i < x.length(); i++)
    {

        y += toupper(x[i]);

    }
    return y;
}

string toLowerString (string x)
{
    string y = "";
    for (int i = 0; i < x.length(); i++)
    {

        y += tolower(x[i]);

    }
    return y;
}

int main ()
{
    string x;
    int lowerCount = 0, upperCount = 0;
    cin >> x;
    for (int i = 0; i < x.length(); i++)
    {
        if (islower(x[i]))
        {
            lowerCount++;
        }
        if(isupper(x[i]))
        {
            upperCount++;
        }
    }

    if(lowerCount >= upperCount)
    {
        cout << toLowerString(x) <<endl;
    }
    else
    {
        cout << toUpperString(x) <<endl;
    }

    return 0;
}
