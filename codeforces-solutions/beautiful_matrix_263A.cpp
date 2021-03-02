#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int ar [5][5];

    for (int i = 0; i < 5 ; i++)
    {
        for  (int j = 0; j <5; j++)
        {
            cin  >> ar [i][j];

            if (ar [i][j] == 1)
            {
                cout << abs( (i+1) - 3) + abs( (j+1) - 3) << endl;
            }
        }
    }

    return 0;
}


