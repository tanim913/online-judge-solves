#include<stdio.h>
int main()
{
    char employee;
    double salary, sold, ts;
    scanf("%s %lf %lf", &employee, &salary, &sold);
    ts = salary + (sold * 15) / 100;
    printf("TOTAL = R$ %.2f\n", ts);
    return 0;
}
