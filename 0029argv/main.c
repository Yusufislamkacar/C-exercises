#include <stdio.h>

int main(int argc,int* argv[]) {

    int x;

    for (x = 0; x < argc; x++){
        printf("Arg#%d = %s\n", x + 1, argv[x]);
        getchar();
        system("cls");//clear screen
        //exit(); break program.
    }
    return(0);

}