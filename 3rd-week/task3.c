#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    /*
    1 inside the while loop keeps
    repeating the cycle forever and whenever
    the input is 0 it breaks the cycle.
    */
    while (1)
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        sum = sum + num;
    }

    printf("합계: %d\n", sum);

    return 0;
}