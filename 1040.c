#include <stdio.h>

int main()
{
    double N1, N2, N3, N4, avg;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    avg = (double)(N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / (2 + 3 + 4 + 1);
    if(avg >= 7.0){
        printf("Media: %.1lf\n", avg);
        printf("Aluno aprovado.\n");
    }
    else if(avg < 5.0){
        printf("Media: %.1lf\n", avg);
        printf("Aluno reprovado.\n");
    }
    else if(avg >= 5.0 && avg <= 6.9){
        printf("Media: %.1lf\n", avg);
        printf("Aluno em exame.\n");
        double N5;
        scanf("%lf", &N5);
        printf("Nota do exame: %.1lf\n", N5);
        double avg1 = (N5 + avg) / 2;
        if(avg1 >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", avg1);
        }
        else if(avg1 <= 4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", avg1);
        }
    }


    return 0;
}

