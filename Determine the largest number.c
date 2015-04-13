#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    puts("To determine which one is the largest.");
    printf("\n1st: ");
    scanf("%d", &x);
    printf("\n2nd: ");
    scanf("%d", &y);

    if(x>y)
    {
        printf("\n%d is greater than %d\n", x, y);
    }
    else if(y>x)
    {
        printf("\n%d is greater than %d\n", y, x);
    }
    else if(x==y)
    {
        puts("Both same numbers.");
    }
    else
    {
        puts("Something went wrong.");
    }


}
