#include<stdio.h>
#include<stdlib.h>
main()
{

    char a;
    printf("Chose any of the following:\na) Question 1\tc) Question 3\nb) Question 2\td) Question 4\n\nEnter here:");
    scanf("%c", &a);
    switch(a)
    {
    case 'a':
    case 'A':
        system("cls");
        question1();
        break;


    }
}

void question1()
{
    int a;
    printf("Question 1:\n\nWhat is the color of a banana?\na)Red");
    a=getch();
    switch(a)
    {
    case 'a':
        printf("\nWrong!\n");
        break;

    default:
        system("cls");
        main();
    }


}






