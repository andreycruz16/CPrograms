#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x, y, temp;
    char num[10];

    printf("Enter the first value : ");
    gets(num);
    x=atoi(num);
    printf("Enter the second value: ");
    gets(num);
    y=atoi(num);

    temp=x;
    x=y;
    y=temp;

    printf("Swapped:\n\n1st = %d\n\n2nd = %d\n\n", x, y);

}
