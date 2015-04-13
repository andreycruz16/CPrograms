/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will input for the Salesman number,
Salesman name, Unit sold, and Unit price*/
main()

{
    int salesman_number, total_sales;
    char salesman_name;
    float unit_sold, unit_price;

    printf("Enter the Salesman number:"); /* Will ask for the Salesman number*/
    scanf("%d", &salesman_number);
    printf("Enter the Salesman name:"); /* Will ask for the Salesman name*/
    scanf("%s", &salesman_name);
    printf("Enter Unit sold:"); /* Will ask for Unit sold*/
    scanf("%f", &unit_sold);
    printf("Enter the Unit's price:"); /* Will ask for the Unit's price*/
    scanf("%f", &unit_price); /*Contains value of unit_price*/
    total_sales=unit_sold*unit_price;
    printf("\nTotal sales:");
    printf("%d\n", total_sales); /*Contains value of total_sales*/

}
