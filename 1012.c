#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    double A,B,C,triangle,circle,trapezium,square,rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangle = 0.5 * A * C;
    circle = pi * pow(C,2);
    trapezium = 0.5 * C * (A + B);
    square = pow(B,2);
    rectangle = A * B;
    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);
    return 0;
}
