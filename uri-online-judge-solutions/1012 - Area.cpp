#include <stdio.h>

int main()

{
    double  A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",((1.0/2)*A*C),(3.14159*C*C),(((A+B)/2)*C),(B*B),(A*B));
    return 0;
}
