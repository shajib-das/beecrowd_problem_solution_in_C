#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    double avg;
    for(i = 1; i <= 10000; i++){
        scanf("%d", &n);
        if(n < 0){
            break;
        }
        sum += n;
        avg = (double)sum / i;
    }

    printf("%0.2lf\n", avg);

    return 0;
}

