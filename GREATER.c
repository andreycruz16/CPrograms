#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char a, b;

    printf("Which character is greater?\n");
    printf("Type a single character:");
    a=getchar();
    fflush(stdin);
    printf("Type another character:");
    b=getchar();

    if(a>b)
    {
        printf("'%c' is greater than '%c'!\n", a,b);
    }
    else if(b>a)
    {
        printf("'%c' is greater than '%c'!\n", b,a);
    }
    else
    {
        printf("Next time, don't type the same character twice.");
    }
    return(0);
}

