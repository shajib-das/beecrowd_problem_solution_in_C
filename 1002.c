#include <stdio.h>
#define pi 3.14159
int main() {

    double R, A;
    scanf("%lf", &R);
    A = pi * pow(R, 2);
    printf("A=%.4lf\n", A);

    return 0;
}
