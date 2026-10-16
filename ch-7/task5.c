
#include <stdio.h>

#define SIZE 10

int main(void) {
    int numbers[SIZE];
    int distinctCount = 0;
    int highestFrequency = 0;
    int modeValue = 0;

    // Read the numbers from the user
    printf("Enter 10 integers: ");

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // Find unique numbers and determine the mode
    for (int i = 0; i < SIZE; i++) {
        int alreadySeen = 0;
        int frequency = 0;

        // Look at the elements before the current position
        for (int j = 0; j < i; j++) {
            if (numbers[j] == numbers[i]) {
                alreadySeen = 1;
                break;
            }
        }

        // Count a number only when it appears for the first time
        if (alreadySeen == 0) {
            distinctCount++;
        }

        // Calculate the total occurrences of this number
        for (int j = 0; j < SIZE; j++) {
            if (numbers[j] == numbers[i]) {
                frequency++;
            }
        }

        // Keep the number with the highest frequency
        // Using > instead of >= preserves the earlier value in a tie
        if (frequency > highestFrequency) {
            highestFrequency = frequency;
            modeValue = numbers[i];
        }
    }

    printf("Number of distinct values: %d\n", distinctCount);
    printf("Mode: %d (%d times)\n", modeValue, highestFrequency);

    return 0;
}
