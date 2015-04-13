#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter a number to determine whether if it is ODD or EVEN.\nEnter here: ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("\n\nEven\n\n");
    }
    else
    {
        printf("\n\nOdd\n\n");
    }
    return(0);
}
