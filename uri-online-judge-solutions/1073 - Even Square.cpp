#include <stdio.h>


int main ()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d^%d = %d\n",i,2,i*i);
        }
    }
    return 0;

}
