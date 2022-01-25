#include <stdio.h>

int main()
{
    int i, n, p = 2002;
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(n != p){
            printf("Senha Invalida\n");
        }
        else{
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}
