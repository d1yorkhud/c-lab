#include <stdio.h>

int main(void)
{
    double x;

    printf("실수를 입력하시오: ");
    scanf("%lf", &x);

    printf("실수형식으로는: %f\n", x);
    printf("실수형식으로는: %e\n", x);

    return 0;
}