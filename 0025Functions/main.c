#include <stdio.h>

void prompt();

int BasicFunction();
void scop();
void scopTest();
int add(int a, int b);

int main() {

    int a, b;
    a = 15;
    b = 55;

    printf("%d",add(a, b));



    //scop();
    //basicFunction()
    return 0;
}

void scop()
{
    int a = 100;

    printf("a is: %d\n", a);
    scopTest();
    printf("a is: %d\n", a);
}

int basicFunction()
{
    int loop;
    char input[32];

    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input, 31, stdin);
        loop = loop + 1;
    }
    return(0);
}

void prompt() {

    printf("c:\\DOS> ");

}

void scopTest() {

    int a = 23;

    printf("a is: %d\n", a);

}

int add(int a, int b) {

    return a + b;
}