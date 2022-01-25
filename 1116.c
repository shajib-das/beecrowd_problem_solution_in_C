#include <stdio.h>

int main()
{
    int i, n, x, y;
    double quotient;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        quotient = (double) x / y;
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1lf\n", quotient);
        }
    }

    return 0;
}

