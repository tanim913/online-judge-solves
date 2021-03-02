#include <stdio.h>
int main ()
{
    float ar[6],sum=0.0;
    int i,count=0;
    for (i=0;i<6;i++){
        scanf("%f",&ar[i]);
    }
    for (i=0;i<6;i++){
        if (ar[i]>0){
            sum=sum+ar[i];
            count++;
        }
    }

    printf("%d valores positivos\n\%.1f\n",count,sum/count);
    return 0;

}
