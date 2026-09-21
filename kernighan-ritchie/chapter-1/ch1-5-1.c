/*
File Copying
character-by-character copy program.

example:

 - input:

Hello
My name is Diyor.
I am learning C.

 - process:

 H → e → l → l → o → \n
M → y → ' ' → n → a → m → e → ... → \n
I → ' ' → a → m → ' ' → l → e → ... → \n

 - output
 
 Hello
My name is Diyor.
I am learning C.
*/


#include <stdio.h>
 /* copy input to output; 1st version */ 

// int main(){
//     int c;

//     c = getchar();
//     while (c != EOF)
//     {
//         putchar(c);
//         c = getchar();
//     }
//     return 0;
// }






/*2nd version*/
int main(){
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    return 0;
    
}