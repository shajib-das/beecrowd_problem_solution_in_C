#include <stdio.h>

int main()
{
    int n, i;
    double x, y, z, avg;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%lf %lf %lf", &x, &y, &z);
        avg = ((x * 2) + (y * 3) + (z * 5)) / (2 + 3 + 5);
        printf("%.1lf\n", avg);
    }

    return 0;
}
