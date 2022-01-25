#include <stdio.h>

int main()
{
    int i, n, p, max = -1;
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(max < n){
            max = n;
            p = i;
        }
    }
    printf("%d\n%d\n", max, p);


    return 0;
}
