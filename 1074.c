#include <stdio.h>

int main()
{
    int n, i, x;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &x);
        if(x < 0 && x % 2 == 0){
            printf("EVEN NEGATIVE\n");
        }
        if(x > 0 && x % 2 == 0){
            printf("EVEN POSITIVE\n");
        }
        if(x < 0 && x % 2 != 0){
            printf("ODD NEGATIVE\n");
        }
        if(x > 0 && x % 2 != 0){
            printf("ODD POSITIVE\n");
        }
        if(x == 0){
            printf("NULL\n");
        }
    }

    return 0;
}
