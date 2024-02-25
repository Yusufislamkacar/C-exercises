#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void getTime();
void DelayTime();
int main()
{
    DelayTime();
    return(0);
}

void DelayTime()
{
    time_t now, then;
    float delay = 0.0;

    time(&then);
    puts("Start");
    while (delay < 5)
    {
        time(&now);
        delay = difftime(now, then);
        printf("%f\r", delay);
    }
    puts("\nStop");
}

void getTime()
{
    time_t tictoc;

    tictoc = time(NULL);
    printf("The time is now %ld\n", tictoc);
}
