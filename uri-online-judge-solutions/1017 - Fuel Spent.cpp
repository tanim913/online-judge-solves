#include <stdio.h>
int main()
{
    int time,avg;
    float fuel;
    scanf(" %d %d",&time,&avg);
    fuel=((time*avg)/12.0);
    printf("%.3f\n",fuel);
    return 0;
}
