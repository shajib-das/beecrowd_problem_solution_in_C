#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    double R, volume;
    scanf("%lf", &R);
    volume = (4/3.0) * pi * pow(R,3);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}

