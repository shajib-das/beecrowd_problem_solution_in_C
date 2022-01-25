#include <stdio.h>

int main()
{
    int t,v,d;
    double liter;
    scanf("%d %d", &t, &v);
    d = t * v;
    liter = (double)d / 12;
    printf("%.3lf\n", liter);

    return 0;
}
