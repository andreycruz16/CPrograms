/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*revise #6 by identifying the commission of the sales person. Determine the amount of commission.*/
int main ()
{
    float total_sales, commission; /*float because i will use numbers with decimals*/
    printf("Enter the Total Sales:"); /*will ask for your total sales*/
    scanf("%f", &total_sales);
    if(total_sales<10000) /*will start to make a decisions*/
        printf("\nThe commission is %.2f\n", commission=total_sales*0.1);
    else if(total_sales<15000)
        printf("\nThe commission is %.2f\n", commission=total_sales*0.15);
    else if(total_sales<20000)
        printf("\nThe commission is %.2f\n", commission=total_sales*0.20);
    else if(total_sales<25000)
        printf("\nThe commission is %.2f\n", commission=total_sales*0.25);
    else if(total_sales>25000)
        printf("\nThe commission is %.2f\n", commission=total_sales*0.30); /*end of decisions*/

}

