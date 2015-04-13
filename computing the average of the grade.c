#include <stdio.h>
main ()
{
    int delay, dots;
    float prelim, midterm, finals, average;
    printf("This program will compute the average of the grades of the student.\n");

    printf("\nEnter the prelim grade : ");
    scanf(" %f", &prelim);
    printf("\nEnter the midterm grade: ");
    scanf(" %f", &midterm);
    printf("\nEnter the finals grade : ");
    scanf(" %f", &finals);

    system("cls");

    printf("\n\tComputing");
    for(dots=1;dots<=5;dots++)
    {
        printf(".");
        for(delay=1;delay<=1E8;delay++);
    }

    system("cls");

    printf("The average is: %.2f\n\n\a", average=(prelim+midterm+finals)/3);

    if(average>=75&&average<=100)
    {
        printf("\n****PASSED.****\n\n\n");
    }
    else if(average>=0&&average<75)
    {
        printf("\n****FAILED****\n\n\n");
    }
    else
    {
        printf("You typed something wrong!\n");
    }
}
