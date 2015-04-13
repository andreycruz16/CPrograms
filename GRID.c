#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a;
    char b;

    printf("Here is thy grid...\n");

    for(a=1;a<=9;a++)
    {
        for(b='A';b<='K';b++)
        {
            printf("%d-%c", a,b);
        }
        puts("");
    }
    return(0);
}
