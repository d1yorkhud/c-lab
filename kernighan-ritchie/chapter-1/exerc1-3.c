/*
Modify the temperature
conversion program to print
a heading above the table.
*/

#include <stdio.h>

int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit-Celsius table\n\n");
    while (fahr<=upper)
    {
        celcius = (5.0/9.0) * (fahr-32.0);
        // %f says to print the number as floating point
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
    
    return 0;
 }