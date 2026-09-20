#include <stdio.h>

int main(void){
    short i;

    i = 32767;
    printf("i = %d\n", i);
    //1
    printf("i = %o\n", (unsigned int)i);
    printf("i = %x\n", (unsigned int)i);

    return 0;
}

/*
2)

If 32,768 is stored in a `short` 
variable, -32,768 is output in a standard 
16-bit two's complement environment. This is because 
the maximum value for a `short` is 32,767, so 32,768 
exceeds its representable range.


3) unsigned short is 16 bits, it does not use one bit for negative numbers.
it can print the number.
unsigned short: 0 ~ 65535


*/