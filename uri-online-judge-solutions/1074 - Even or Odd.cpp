#include <stdio.h>
int main ()
{
    int i,n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%2==0&&n>0)printf("EVEN POSITIVE\n");
        else if(n%2!=0&&n<0)printf("ODD NEGATIVE\n");
        else if(n%2!=0&&n>0)printf("ODD POSITIVE\n");
        else if(n%2==0&&n<0)printf("EVEN NEGATIVE\n");
        else printf("NULL\n");
    }
    return 0;
}
