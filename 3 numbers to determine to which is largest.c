#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("1st:");
    scanf("%d", &x);
    printf("2nd:");
    scanf("%d", &y);
    printf("3rd:");
    scanf("%d", &z);

    if(x>y)
    {
        if(x>z)
        {
            printf("%d is largest.", x);
        }
        else
        {
            printf("%d is largest.", z);
        }
    }
    else if(y>z)
    {
        printf("%d is largest", y);
    }
    else
    {
        printf("%d is largest.", z);
    }
}
