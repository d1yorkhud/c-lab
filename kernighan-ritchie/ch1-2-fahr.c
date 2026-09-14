#include <stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */

 int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr<=upper)
    {
        celcius = (5.0/9.0) * (fahr-32.0);
        // %f says to print the number as floating point
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
    
    
 }


 /*
 %d  ->  print as decimal integer
 %6d  ->  print as decimal integer, at least 6 characters wide
 %f ->  print as floating point
 %6f ->  print as floating point, at least 6 characters wide
 %.2f ->  print as floating point, 2 characters after decimal point
 %6.2f ->  print as floating point, at least 6 wide and 2 after decimal point 
 */



 /*
 printf also recognizes
 
 %o for octal,
 %x for hexadecimal,
 %c for character,
 %s for character string,
 %% for itself. 
 */