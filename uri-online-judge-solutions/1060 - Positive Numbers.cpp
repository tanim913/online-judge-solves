#include <stdio.h>
int main ()
{
    float ar[6];
    int i,count=0;
    for (i=0;i<6;i++){
        scanf("%d",&ar[i]);
    }
    for (i=0;i<6;i++){
        if (ar[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;

}
