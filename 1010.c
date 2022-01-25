#include <stdio.h>

int main() {

    int A1, B1, A2, B2;
    double C1, C2, Value_to_Pay;
    scanf("%d %d %lf\n", &A1, &B1, &C1);
    scanf("%d %d %lf", &A2, &B2, &C2);
    Value_to_Pay = (B1 * C1 + B2 * C2);
    printf("VALOR A PAGAR: R$ %.2lf\n", Value_to_Pay);

    return 0;
}

