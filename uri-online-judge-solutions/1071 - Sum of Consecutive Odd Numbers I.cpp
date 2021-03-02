#include <stdio.h>
int main ()
{
    int i,s,l,sum=0,temp;
    scanf("%d",&s);
    scanf("%d",&l);
    if(s>l){
        temp=l;
        l=s;
        s=temp;
    }
    for(i=s+1;i<l;i++){
        if (i%2!=0){
            sum+=i;

        }
    }
    printf("%d\n",sum);
    return 0;
}
