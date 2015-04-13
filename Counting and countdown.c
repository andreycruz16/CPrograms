#include <stdio.h>
int main ()
{
    int i, count, delay, point;
    printf("This Program will count-up and count-down.\n\n");
    printf("Enter a number to count-up and count-down:");
    scanf("%d", &count);
    puts("");
    for(i=1;i<=count;i++)
    {
        printf("%d\n", i);
        for(delay=0;delay<1E8;delay++);
    }
    printf("\nCounting to %d is finished.", count);
    printf("\n\nConfiguring for countdown.");
    for(point=1;point<=5;point++)
    {
        printf(".");
        for(delay=0;delay<1E8;delay++);
    }
    puts("\n");
    for(i=1;count>=i;count--)
    {
        printf("%d\n", count);
        for(delay=1;delay<=1E8;delay++);
    }
    printf("\nPREPARING TO CLEARSCREEN.");
    for(point=1;point<=5;point++)
    {
        printf(".");
        for(delay=1;delay<=1E8;delay++);
    }
    for(i=1;i<5;i++)
    {
        printf("%d...", i);
        for(delay=1;delay<=1E8;delay++);
        printf("");
    }
    puts("");
    system("cls");
    printf("CLEARSCREEN FINISHED");
    for(point=1;point<=5;point++)
    {
        printf(".");
        for(delay=1;delay<=1E8;delay++);
    }
    for(delay=1;delay<=1E8;delay++);
    system("cls");
    for(i=1;i<=15;i++)
    {
        printf("amazing!");
        for(point=1;point<=5;point++)
        {
            printf("!");
            for(delay=1;delay<=1E8;delay++);
        }
        puts("");
    }
    puts("");
}
