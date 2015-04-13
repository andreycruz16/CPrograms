/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will ask values for n1 and n2 and will
compute and display the sum, difference, product, quotient*/
main()

{
    int n1, n2, sum, difference, product, quotient;
    printf("Enter n1:"); /*Will ask for n1*/
    scanf("%d", &n1);
    printf("Enter n2:"); /*Will ask for n2*/
    scanf("%d", &n2);
    sum=n1+n2;
    difference=n1-n2;
    product=n1*n2;
    quotient=n1/n2;
    printf("\nSum:\t\t");
    printf("%d\n", sum); /*Contains value of int sum*/
    printf("Difference:\t");
    printf("%d\n", difference); /*Contains value of int difference*/
    printf("Product:\t");
    printf("%d\n", product); /*Contains value of int product*/
    printf("Quotient:\t");
    printf("%d\n", quotient); /*Contains value of int quotient*/
}
