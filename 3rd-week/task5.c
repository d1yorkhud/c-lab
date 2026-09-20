#include <stdio.h>

int main(void){
    //float x;
    double x;

    //x = 1.2345678901234567890;
    //x = 1e39;
    //x = 1.23456e-46;
    x = 1.2345678901234567890;
    printf("x = %10.20f\n", x);
    return 0;
}



/*
1)

%10.20f doesn't give the float 20 digits of precision.
 It only asks printf() to display 20 digits after the decimal
  point. So, the result somewhere like 1.23456788063049316406

2)

  float maximum ≈ 3.4 × 10³⁸
  in this example 1e39 is loo large, that's why
  result prints infinity


3)
in this case x = 1.23456e-46 is too small 
number. it is smaller than the minimal float
point (1.4 × 10⁻⁴⁵), that's why the result is x = 0.00000000000000000000


4)


double uses 64 bits (8 bytes) and has about 15–17 
significant decimal digits of precision.
so, the result is different somewhere like
x = 1.23456789012345669043


*/