#include <stdio.h>
main ()
{
    char salesman_name[50];
    float unit_sold, unit_price, total_sales;

    printf("This program will compute the total sales of the salesman.");
    printf("\n\nWhat is the name of the salesman?\nType here: ");
    fgets(salesman_name,50,stdin); /*you can also use  "fgets(name,50,stdin); OR "gets(salesman_name);"*/
    printf("\nWhat is the price of the unit?\nType here: ");
    scanf(" %f", &unit_price);
    printf("\nHow many units sold?\nType here: ");
    scanf(" %f", &unit_sold);
    printf("\nThe total sales of %5s is: PHP %.2f\n\n", /*the 5 between the %5s will set the limit of the string.*/
           salesman_name, total_sales=unit_sold*unit_price);
}
