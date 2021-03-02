#include <bits/stdc++.h>
using namespace std;
int main ()
{
   char ch;

   long long cnt = 0;

   while (scanf("%c",&ch)==1)
   {
       if(ch== '"')
       {
           cnt++;

           if (cnt % 2 == 1) //checking if the first quotation
           {
               printf ("``");
           }

           else if (cnt % 2 == 0) //checking if the second quotation
           {
               printf ("''");
           }

       }

       else
           {
               printf ("%c", ch);
           }
   }
   return 0;

}
