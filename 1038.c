#include <stdio.h>

int main()
{
    int x, y;
    double value_to_pay;
    scanf("%d %d", &x, &y);
    if(x == 1){
        value_to_pay = y * 4.00;
        printf("Total: R$ %.2lf\n", value_to_pay);
    }
    else if(x == 2){
        value_to_pay = y * 4.50;
        printf("Total: R$ %.2lf\n", value_to_pay);
    }
    else if(x == 3){
        value_to_pay = y * 5.00;
        printf("Total: R$ %.2lf\n", value_to_pay);
    }
    else if(x == 4){
        value_to_pay = y * 2.00;
        printf("Total: R$ %.2lf\n", value_to_pay);
    }
    else if(x == 5){
        value_to_pay = y * 1.50;
        printf("Total: R$ %.2lf\n", value_to_pay);
    }

    return 0;
}
