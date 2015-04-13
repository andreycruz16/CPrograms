/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will input for a number and will determine
whether the number is positive or negative*/
main()

{
    float n; /*the number might be decimal*/
    printf("Enter a number:"); /*Will ask a number*/
    scanf("%f", &n);
    if(n<0)
    printf("\nNegative\n"); /*Will print negative*/
    if(n>0)
    printf("\nPositive\n"); /*Will print positive*/
}
