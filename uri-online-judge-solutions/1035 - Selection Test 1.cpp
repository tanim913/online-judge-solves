#include<stdio.h>
int main()

{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    (b>c&&d>a&&((c+d)>(a+b))&&c>=0&&d>=0&&a%2==0) ? printf("Valores aceitos\n") : printf("Valores nao aceitos\n");
    return 0;
}
