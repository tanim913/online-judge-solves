#include <stdio.h>
int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    int ar[n];
    for (i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for (i=0;i<n;i++){
        if(ar[i]>=10&&ar[i]<=20){
            c++;
        }
        else d++;
    }
    printf("%d in\n%d out\n",c,d);
    return 0;

}
