#include<stdio.h>
int main ()
{
    int a, b;
    scanf("%d %d",&a,&b);
    if(a==b)printf("O JOGO DUROU 24 HORA(S)\n");
    if(b>a)printf("O JOGO DUROU %d HORA(S)\n",b-a);
    if(a>b)printf("O JOGO DUROU %d HORA(S)\n",(24+b)-a);
    return 0;
}
