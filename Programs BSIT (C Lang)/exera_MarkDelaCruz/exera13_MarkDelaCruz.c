/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Revise exera12 by inputing 3 numbers then determine the largest*/
main()
{
    int n1, n2, n3;
    printf("Enter value for n1:");
    scanf("%d", &n1);
    printf("Enter value for n2:");
    scanf("%d", &n2);
    printf("Enter value for n3:");
    scanf("%d", &n3);
    if(n1>n2)
    {
        if(n1>n3)
        printf("\n%d is the largest number.\n", n1);
        else
        printf("\n%d is the largest number.\n", n3);
    }
        else
        if(n2>n3)
        printf("\n%d is the largest number.\n", n2);
        else
        printf("\n%d is the largest number.\n", n3);

}
