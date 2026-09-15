/*
1.4 Symbolic Constants
   - #define - symbolic name or symbolic constant
   - symbolic constants, Not Variables
*/


#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
// Fahr -Celsius table
int main(){
    int fahr;
    printf("Fahr-Celsius table\n\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}