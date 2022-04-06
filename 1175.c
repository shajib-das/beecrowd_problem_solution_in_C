#include <stdio.h>

int main()
{
    int n[20], m[20], i, j;
    for(i = 0; i < 20; i++){
        scanf("%d", &n[i]);
    }
    for(i = 0, j = 19; j >= 0; i++, j--){
        m[j] = n[i];
    }
    for(j = 0; j < 20; j++){
        printf("N[%d] = %d\n", j, m[j]);
    }


    return 0;
}
