#include <stdio.h>

int main()
{
    int n, i, x, total = 0, total_1 = 0, total_2 = 0, total_3 = 0;
    char c;
    double percentage_C, percentage_R, percentage_S;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %c", &x, &c);
        total += x;
        if(c == 'C'){
            total_1 += x;
        }
        if(c == 'R'){
            total_2  += x;
        }
        if(c == 'S'){
            total_3 += x;
        }
    }
    percentage_C = (double)(total_1 * 100) / total;
    percentage_R = (double)(total_2 * 100) / total;
    percentage_S = (double)(total_3 * 100) / total;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", total_1);
    printf("Total de ratos: %d\n", total_2);
    printf("Total de sapos: %d\n", total_3);
    printf("Percentual de coelhos: %.2lf %%\n", percentage_C);
    printf("Percentual de ratos: %.2lf %%\n", percentage_R);
    printf("Percentual de sapos: %.2lf %%\n", percentage_S);


    return 0;
}
