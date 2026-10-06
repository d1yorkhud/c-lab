/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines. 
*/

#include <stdio.h>

int main(){

    int c;
    int blanks = 0;
    int tabs = 0;
    int nl = 0;


    printf("Enter text (Press Ctrl+D or Ctrl+Z to stop):\n");
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blanks;
        }

        if (c == '\t')
        {
            ++tabs;
        }

        if (c == '\n')
        {
            ++nl;
        }
        
    }
    
    printf("\nBlanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("NewLines: %d\n", nl);


    return 0;
}