#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int count, n;
    char start[10];

    printf("Enter a starting point for countdown: ");
    gets(start);
    count=atoi(start);
        for(count;count>0;count--)
        printf("%d WAIT.\n", count);

        for(n=30000;n>0;n--)
            printf("%3d Remaining!\n", n);

            printf("BOOOM!");




    return(0);
}

