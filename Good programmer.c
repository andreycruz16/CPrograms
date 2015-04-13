#include <stdio.h>
int main()
{
    int point, delay;
    printf("Good job Mark Andrey! You are a very good programmer");
        for(point=1;point<=5;point++)
        {
            printf(".");
            for(delay=0;delay<1E8;delay++);
        }

    printf("Configuring for countdown.");
    for(point=1;point<=5;point++)
    {
        printf(".");
        for(delay=0;delay<1E8;delay++);
    }
}
