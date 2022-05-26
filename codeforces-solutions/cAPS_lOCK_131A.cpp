#include <bits/stdc++.h>
using namespace std;

int main ()
{

    string x;
    cin>> x;

    bool flag = true;

    for (int  i = 1; i< x.length(); i++)
    {
        if(islower(x[i]))
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        for (int i =0; i< x.length(); i++)
        {
            if(islower(x[i]))
            {
                x[i] = toupper(x[i]);
                //cout<<"choto -> boro"<<endl;
            }
            else
            {
                x[i] = tolower(x[i]);
                //cout<<"boro -> boro"<<endl;
            }
        }
        cout << x <<endl;
    }
    else
    {
        cout << x << endl;
    }



    return 0;
}
