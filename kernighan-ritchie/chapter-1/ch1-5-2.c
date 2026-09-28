/*
1.5.2
Character Counting

-> 1st version

long -> at least 32 bits; on some machines
int and long are the same size, on others
int is 16 bits(maximum value 32767).

*/


#include <stdio.h>
// int main(){
//     long nc;
//     nc = 0;

//     while (getchar() != EOF)
//     {
//         ++nc;
//     }
//     printf("%ld\n", nc);

//     return 0;
// }





/*
-> 2nd version

to deal with bigger numbers using
double is good.

*/



int main(){
    double nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
    
}