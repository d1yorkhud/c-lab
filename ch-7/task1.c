
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter integer a: ");
    scanf("%d", &a);

    printf("Enter integer b: ");
    scanf("%d", &b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (quotient)\n", a / b);
    printf("a %% b = %d (remainder)\n", a % b);
    printf("a / b = %.2f (real division)\n", (double)a / b);

    return 0;
}
