#include <stdio.h>
#include "main.h"

void aboutPointer();

int main() {

    //aboutPointer();
    char* fruit[] = {
       "watermelon",
       "banana",
       "pear",
       "apple",
       "coconut",
       "grape",
       "blueberry"
    };
    for(int x=0;x<7;x++){
        printf("%c", **(fruit+x));
    }
    

    return(0);

}

void aboutPointer()
{
    char alpha = 'A';
    int x;
    char* pa;

    pa = &alpha;

    for (x = 0; x < 26; x++)
        putchar((*pa)++); //In the *pa++ operation, the ++ operator binds more 
    putchar('\n');   //tightly than the * operator. Both operators have 
    // the same level in the Sacred Order of Precedence,
    //  but the operators are read right-to-left.

}
