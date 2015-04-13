/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will input for a number and compute the square and the cube of a number*/
main()

{
    int n, square, cube;
    printf("Enter a number:"); /* Will ask for 1 number*/
    scanf("%d", &n);
    square=n*n;
    cube=n*n*n;
    printf("\nSquare:\t");
    printf("%d\n", square); /*Contains value of int square*/
    printf("Cube:\t");
    printf("%d\n", cube); /*Contains value of int cube*/

}
