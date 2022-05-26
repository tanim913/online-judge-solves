#include <bits/stdc++.h>
using namespace std;

int main ()
{

    int n ;
    int mx = INT_MIN;
    int max_index = INT_MIN;
    int min_index = INT_MIN;
    int mn = INT_MAX;

    cin >> n;
    int ar[n];

    for (int i = 0; i<n ; i++)
    {
        cin >> ar[i];
    }

    for (int i =0; i<n; i++)
    {
        if(ar[i] > mx)
        {
            mx = ar[i];
            max_index = i;
        }
        if(ar[i] <= mn)
        {
            mn = ar[i];
            min_index = i;
        }
    }
    //cout << max_index <<" "<< min_index <<endl;

    if(max_index > min_index)
    {
        cout << max_index -1 + n - min_index -1 <<endl;
    }
    else
    {
        cout << max_index + n - min_index -1 <<endl;

    }


    return 0;
}
