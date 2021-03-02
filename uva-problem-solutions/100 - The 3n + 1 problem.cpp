#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;
    while (scanf("%d %d", &a,&b) != -1)
    {
        int temp_a = a;
        int temp_b = b;
        int max_cycle = 0;
        int cycles;

        if (a>b)
        {
            swap (a,b);
        }

        for(;a<=b;a++)
        {
            unsigned int n = a;
            cycles = 1;

            while (n!=1)
            {
                if (n%2==1)
                {
                    n = 3*n+1;
                }
                else
                {
                    n = n/2;
                }

                cycles +=1;
            }

            if(cycles > max_cycle)
            {
                max_cycle = cycles;
            }
        }

        printf("%d %d %d\n",temp_a,temp_b,max_cycle);

    }
    return 0;

}
