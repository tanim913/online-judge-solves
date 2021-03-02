#include <stdio.h>
int main ()
{
    float sal,in_s,in;
    int per;
    scanf("%f",&sal);
    if(sal>=0.00&&sal<=400.00){
        in=sal*.15;
        in_s=in+sal;
        per=15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",in_s,in,per);
    }
    else if(sal>=400.01&&sal<=800.00){
        in=sal*.12;
        in_s=in+sal;
        per=12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",in_s,in,per);
    }

    else if(sal>=800.01&&sal<=1200.00){
        in=sal*.1;
        in_s=in+sal;
        per=10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",in_s,in,per);
    }
    else if(sal>=1200.01&&sal<=2000.00){
        in=sal*.07;
        in_s=in+sal;
        per=7;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",in_s,in,per);
    }
    else if(sal>2000){
        in=sal*.04;
        in_s=in+sal;
        per=4;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",in_s,in,per);
    }

    return 0;

}
