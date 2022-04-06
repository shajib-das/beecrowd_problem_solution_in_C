#include <stdio.h>

int main()
{
    int i = 1, j;
    double n, sum = 0;
    for(j = 1; j <= 100; j++){
        n = (double) i / j;
        sum += n;
    }
    printf("%0.2lf\n", sum);


    return 0;
}
