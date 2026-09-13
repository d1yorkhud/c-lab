#include <stdio.h>

int main(void)
{
    int salary;
    int expenses;
    int savings;

    printf("월급을 입력하시오: ");
    scanf("%d", &salary);

    printf("이번달 총 지출액을 입력하시오: ");
    scanf("%d", &expenses);

    savings = salary - expenses;

    printf("저축액: %d\n", savings);

    return 0;
}