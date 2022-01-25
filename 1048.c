#include <stdio.h>

int main()
{
    double salary, new_salary, money_earned;
    scanf("%lf", &salary);
    if(salary >= 0 && salary <= 400){
        new_salary = salary + salary * 0.15;
        money_earned = salary * 0.15;
        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary > 400 && salary <= 800){
        new_salary = salary + salary * 0.12;
        money_earned = salary * 0.12;
        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary > 800 && salary <= 1200){
        new_salary = salary + salary * 0.10;
        money_earned = salary * 0.10;
        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary > 1200 && salary <= 2000){
        new_salary = salary + salary * 0.07;
        money_earned = salary * 0.07;
        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary > 2000){
        new_salary = salary + salary * 0.04;
        money_earned = salary * 0.04;
        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
