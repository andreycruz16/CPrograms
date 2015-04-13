/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*Revise exera5 by determining if average is considered as passed or failed*/
main()

{
    float average; /*Float because the average have decimal numbers*/
    printf("What is the Average?"); /*Will ask for the average*/
    scanf("%f", &average);
    if(average>=74.5) /*Decision*/
    printf("\nPASSED!\n"); /*Will output "PASSED!*/
    if(average<74.5) /*Decision*/
    printf("\nFAILED!\n"); /*Will output "FAILED!*/
}
