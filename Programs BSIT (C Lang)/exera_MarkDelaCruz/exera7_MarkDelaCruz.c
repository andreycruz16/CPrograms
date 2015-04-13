/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will swap the values of the 2 variables*/
main()
{
    char variable1, variable2, temp;

    printf("Enter a variable 1:"); /* Will ask for variable 1*/
    scanf(" %c", &variable1);
    printf("Enter a variable 2:"); /* Will ask for variable 2*/
    scanf(" %c", &variable2);
    temp=variable1;
    variable1=variable2;
    variable2=temp;
    printf("\nVariable 1:");
    printf("\t%c\n", variable1); /*The variable 1 becomes variable 2*/
    printf("Variable 2:");
    printf("\t%c\n", variable2); /*The variable 2 becomes variable 1*/

}
