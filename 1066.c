#include <stdio.h>

int main()
{
    int i, n, count = 0, count1 = 0, count2 = 0, count3 = 0;
    for(i = 1; i <= 5; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            count++;
        }
        else{
            count1++;
        }
        if(n > 0){
            count2++;
        }
        if(n < 0){
            count3++;
        }
    }
    printf("%d valor(es) par(es)\n", count);
    printf("%d valor(es) impar(es)\n", count1);
    printf("%d valor(es) positivo(s)\n", count2);
    printf("%d valor(es) negativo(s)\n", count3);

    return 0;
}

