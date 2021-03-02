#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int high , low;

    for (;;)
    {
        cin>>high>>low;
        if(high==low)
        {
            break;
        }
        else if (low>high)
        {
           printf("Crescente\n");
        }
        else
         printf("Decrescente\n");

    }

}
