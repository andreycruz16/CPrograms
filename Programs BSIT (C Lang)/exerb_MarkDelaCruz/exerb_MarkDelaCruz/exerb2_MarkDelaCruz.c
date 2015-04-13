/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
#include <stdlib.h>
/*revise #8 by identifying the equivalent grade*/
int main ()
{
    int prelim, midterm, finals, average;
    printf("Enter your prelim grade:"); /*ask for prelim grade*/
    scanf("%d", &prelim);
    printf("Enter youe midterm grade:"); /*ask for midterm grade*/
    scanf("%d", &midterm);
    printf("Enter your finals grade:"); /*ask for finals grade*/
    scanf("%d", &finals);

    printf("\nAverage    :%d%\n", average=(prelim+midterm+finals)/3); /*will print the average*/

    printf("Point Grade:");

    if(average==100) /*start of decisions for point grade*/
        printf("1.00\n");
    else if(average==99)
        printf("1.00\n");
    else if(average==98)
        printf("1.00\n");
    else if(average==97)
        printf("1.00\n");
    else if(average==96)
        printf("1.25\n");
    else if(average==95)
        printf("1.25\n");
    else if(average==94)
        printf("1.25\n");
    else if(average==93)
        printf("1.5\n");
    else if(average==92)
        printf("1.5\n");
    else if(average==91)
        printf("1.5\n");
    else if(average==90)
        printf("1.75\n");
    else if(average==89)
        printf("1.75\n");
    else if(average==88)
        printf("1.75\n");
    else if(average==87)
        printf("2.00\n");
    else if(average==86)
        printf("2.00\n");
    else if(average==85)
        printf("2.00\n");
    else if(average==84)
        printf("2.25\n");
    else if(average==83)
        printf("2.25\n");
    else if(average==82)
        printf("2.25\n");
    else if(average==81)
        printf("2.5\n");
    else if(average==80)
        printf("2.5\n");
    else if(average==79)
        printf("2.5\n");
    else if(average==78)
        printf("2.75\n");
    else if(average==77)
        printf("2.75\n");
    else if(average==76)
        printf("2.75\n");
    else if(average==75)
        printf("3.00\n");
    else if(average<75)
        printf("4.00 or 5.00\n");
    else
        printf("\nInvalid character.\n"); /*will print this if you entered grade > 100*/

}
