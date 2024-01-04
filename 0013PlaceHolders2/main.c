#include <stdio.h>

int main()
{
    unsigned int ono;

    ono = -10;
    printf("The value of ono is %d.\n", ono);//this value is unsigned but placeholder signed. So the output signed.
    return(0);
}