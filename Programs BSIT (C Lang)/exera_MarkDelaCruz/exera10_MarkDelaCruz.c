/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Revise exera9 by considering 0 as a neutral number*/
main()

{
    float n; /*the number might be decimal*/
    printf("Enter a number:"); /*Will ask a number*/
    scanf("%f", &n);
    if(n<0)
    printf("\nNegative.\n"); /*Will print negative*/
    if(n>0)
    printf("\nPositive.\n"); /*Will print positive*/
    if (n==0)
    printf("\nNeutral.\n"); /*Will print neutral*/
}
