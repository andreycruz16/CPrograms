/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will input for 2 numbers then determine the largest*/
main()
{
    int n1, n2;
    printf("Enter value for n1:");
    scanf("%d", &n1);
    printf("Enter value for n2:");
    scanf("%d", &n2);
    if(n1>n2)
    printf("\nn1 is a larger number = %d\n", n1);
    if(n1<n2)
    printf("\nn2 is a larger number = %d\n", n2);
    if(n1==n2)
    printf("\nEqual.\n");
}
