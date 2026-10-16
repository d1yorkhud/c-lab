
#include <stdio.h>

int main(void) {
    int n;
    int count = 0;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // counts the integers that are divisible to 3
    // and calculates the sum of them
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            count++;
            sum += i;
        }
    }

    printf("Number of multiples of 3 from 1 to %d: %d\n", n, count);
    printf("Sum of multiples of 3 from 1 to %d: %d\n", n, sum);

    return 0;
}
