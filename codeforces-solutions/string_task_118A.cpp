#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x,output;
    cin>> x;

    for(int i = 0; i < x.length(); i++)
    {

        if(x[i]!='a' && x[i]!='e' && x[i]!='i' && x[i]!='o' && x[i]!='u'&& x[i]!='y')
        {
            if(x[i]!='A' && x[i]!='E' && x[i]!='I' && x[i]!='O' && x[i]!='U'&& x[i]!='Y')
            {
                output += '.';
                output += tolower(x[i]);
            }
        }

    }
    cout<<output<<endl;
    return 0;
}
