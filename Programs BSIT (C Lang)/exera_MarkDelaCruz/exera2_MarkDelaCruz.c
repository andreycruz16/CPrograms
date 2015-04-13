/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will compute and display the sum,
difference, product, quotient of n1=10 and n2=10*/
main()

{
    int n1, n2, sum, difference, product, quotient;
    n1=10;
    n2=10;
    sum=n1+n2;
    difference=n1-n2;
    product=n1*n2;
    quotient=n1/n2;
    printf("n1=10\t");
    printf("n2=10\n\n");
    printf("Sum:\t\t");
    printf("%d\n", sum); /*Contains value of int sum*/
    printf("Difference:\t");
    printf("%d\n", difference); /*Contains value of int difference*/
    printf("Product:\t");
    printf("%d\n", product); /*Contains value of int product*/
    printf("Quotient:\t");
    printf("%d\n", quotient); /*Contains value of int quotient*/
}
