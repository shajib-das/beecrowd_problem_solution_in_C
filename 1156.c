#include <stdio.h>

int main()
{
    double x, y = 1, z, S=0;
    for(x = 1; x <= 39; x += 2)
    {
        z = x / y;
        S += z;
        y *= 2;
    }
    printf("%.2lf\n", S);

    return 0;
}
