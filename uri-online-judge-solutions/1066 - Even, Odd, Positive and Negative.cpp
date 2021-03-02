#include <stdio.h>
int main ()
{
    int ar[5],even=0,odd=0,pos=0,neg=0,i;

    for (i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    for (i=0;i<5;i++){
        if (ar[i]%2==0){
            even++;
        }
        if (ar[i]%2==1||ar[i]%2==-1){
            odd++;
        }
        if (ar[i]>0){
            pos++;
        }
        if (ar[i]<0){
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;

}

