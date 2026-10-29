#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {
        printf("\n");

        for (int j = 1; j<= i; j++)
        {
            printf("* ");
        }
        
    }
    

    return 0;
}


// Variable count can compile because variables can contain english
// characters, numbers and underscores