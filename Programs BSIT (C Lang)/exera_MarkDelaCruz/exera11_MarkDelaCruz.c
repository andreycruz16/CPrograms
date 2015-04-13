/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will input for a number then determine
whether the number is even or odd*/
main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n%2==0)
    printf("\nEven.\n");
    if(n%2!=0)
    printf("\nOdd.\n");
}
