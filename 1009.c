#include <stdio.h>

int main()
{
    char name;
    double salary, total_money, final_salary;
    scanf("%s %lf %lf", &name, &salary, &total_money);
    final_salary = salary + (total_money * 0.15);
    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}

