#include <stdio.h>
int main ()
{
    int ar[5],count=0,i;

    for (i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    for (i=0;i<5;i++){
        if (ar[i]%2==0){
            count++;
        }
    }

    printf("%d valores pares\n",count);
    return 0;

}

