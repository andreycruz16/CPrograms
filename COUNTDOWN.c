#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int start;
    unsigned long delay;
    char ex='!';

    printf("Please enter the number to start\n");
    printf("the countdown (1 to 100): ");
    scanf("%d", &start);
    puts("");

    do
    {
        printf("COUNTDOWN: %2d\n", start);
        start--;
        for(delay=0;delay<1E8;delay++); /*Delay Loop*/
    }
    while(start>0);

    printf("\nBOOOM");

    for(ex=1;ex<30;ex++)
    {
        printf("!");
        for(delay=0;delay<1E7;delay++);
    }
    puts("");

    do
    {
        printf("\nWait a second");
        for(delay=0;delay<1E8;delay++);
    }
    while(start>0);

    for(ex=1;ex<5;ex++)
    {
        printf(".");
        for(delay=0;delay<1E8;delay++);
    }
    puts("");

    puts("\nDid you know?\n");

}

