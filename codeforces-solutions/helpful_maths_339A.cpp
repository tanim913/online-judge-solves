#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;

    cin >> x;
    cout << endl;

    x.erase(remove(x.begin(), x.end(), '+'), x.end()); // Erasing '+' sign

    sort(x.begin(), x.end()); // Sorting string

    // Inserting '+' sign
    for(int i = 1; i < x.length(); i += 2)
    {
        x.insert(i, 1, '+');
    }


//    for(int i = 0; i<x.size(); i++)
//    {
//        if (i == x.size() - 1)
//        {
//            cout<< x[i]  <<endl;
//        }
//        else
//        {
//            cout<< x[i]  << "+" ;
//        }
//
//    }

    cout << x<< endl;
}
