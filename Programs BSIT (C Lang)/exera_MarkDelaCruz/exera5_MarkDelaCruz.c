/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Program that will input for Preliminary, Midterm, and
Final grade.Compute and display the average*/
main()

{
    float prelim, midterm, finals, sum, average;
    printf("Enter Prelim grade:");
    scanf("%f", &prelim); /*Contains value of int prelim*/
    printf("Enter Midterm grade:");
    scanf("%f", &midterm); /*Contains value of int midterm*/
    printf("Enter Finals grade:");
    scanf("%f", &finals); /*Contains value of int finals*/
    sum=prelim+midterm+finals;
    average=sum/3;
    printf("\nAverage:");
    printf("%.1f\n", average); /*Contains value of int average*/
}
