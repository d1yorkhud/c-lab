/*
Write a program to print
the corresponding 
Celsius to Fahrenheit table.
*/

#include <stdio.h>
int main(){

    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;
    printf("Celsius to Fahrenheit table:\n\n");
    while (celcius <= upper)
    {
        fahr = (celcius * 1.8) + 32;
        printf("%6.1f %6.1f\n", celcius, fahr);
        celcius = celcius + step;

    }
    return 0;
    
}