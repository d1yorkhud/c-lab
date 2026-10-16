
#include <stdio.h>

#define SIZE 10

int main(void) {
    int score[SIZE];
    int sum = 0;
    int max, min;
    int count = 0;
    double average;

    printf("Enter 10 scores: ");

    //  calculates the sum
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    // takes the average; variable sum initialized as double
    // to get the average as decimal
    average = (double)sum / SIZE;

    max = score[0];
    min = score[0];

    // calculates the maximum and minimum value
    for (int i = 1; i < SIZE; i++) {
        if (score[i] > max) {
            max = score[i];
        }

        if (score[i] < min) {
            min = score[i];
        }
    }

    // counts the number of scores at or above average
    for (int i = 0; i < SIZE; i++) {
        if (score[i] >= average) {
            count++;
        }
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.1f\n", average);
    printf("Maximum: %d, Minimum: %d\n", max, min);
    printf("Number of scores at or above average: %d\n", count);

    return 0;
}
