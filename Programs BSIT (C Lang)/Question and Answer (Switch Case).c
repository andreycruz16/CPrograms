#include<stdio.h>
#include<stdlib.h>
main()
{
    menu();
}

void menu()
{
    system("color 17");
    char a=0;
    printf("Chose any of the following:\na) Question 1\tb)\Question 2\nc) Question 3\td) Question 4\n\nEnter here:");
    scanf(" %c", &a);
    switch(a)
    {
    case 'a':
    case 'A':
        system("cls");
        question1();
        break;
    case 'b':
    case 'B':
        system("cls");
        question2();
        break;
    case 'c':
    case 'C':
        system("cls");
        question3();
        break;
    case 'd':
    case 'D':
        system("cls");
        question4();
        break;
    default:
        system("cls");
        def();
        break;

    }
}

void question1()
{
    char n=0;
    printf("Question 1:\n\nWhat is the color of a banana?\na)Red\t\tc)Blue\nb)Orange\td)Yellow\n\nType 'Y' to go back.\n\nEnter here:");
    scanf(" %c", &n);
    switch(n)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'a':
    case 'b':
    case 'c':
        printf("\n----Wrong.\n");
        def();
        break;
    case 'D':
    case 'd':
        printf("\n----Correct.\n");
        def();
        break;
    case 'Y':
    case 'y':
        system("cls");
        menu();
        break;
    default:
        system("cls");
        question1();
        break;
    }
}

void question2()
{
    char a=0;
    printf("Question 2:\n\nWhat is the highest mountain??\na)Mt. Makiling\tc)Mt. Everest\nb)Mt. Rushmore\td)Mt. Mayon\n\nType 'Y' to go back.N\n\nEnter here:");
    scanf(" %c", &a);
    switch(a)
    {
    case 'A':
    case 'B':
    case 'D':
    case 'a':
    case 'b':
    case 'd':
        printf("\n----Wrong.\n");
        def();
        break;
    case 'C':
    case 'c':
        printf("\n----Correct.\n");
        def();
        break;
    case 'Y':
    case 'y':
        system("cls");
        menu();
        break;
    default:
        system("cls");
        question2();
        break;

    }
}

void question3()
{
    char a=0;
    printf("Question 3:\n\nWhat does WWW stands for?\na)Wide World Wireless\tc)World Web Wide\nb)World Wide Web\td)Wide Wireless Web\n\nType 'Y' to go back.\n\nEnter here:");
    scanf(" %c", &a);
    switch(a)
    {
    case 'A':
    case 'C':
    case 'D':
    case 'a':
    case 'c':
    case 'd':
        printf("\n----Wrong.\n");
        def();
        break;
    case 'B':
    case 'b':
        printf("\n----Correct.\n");
        def();
        break;
    case 'Y':
    case 'y':
        system("cls");
        menu();
        break;
    default:
        system("cls");
        question3();
        break;
    }
}

void question4()
{
    char a=0;
    printf("Question 4:\n\nHow many islands in the Philippines?\na)7,107\t\tc)1,707\nb)7,701\t\td)1,107\n\nType 'Y' to go back.\n\nEnter here:");
    scanf(" %c", &a);
    switch(a)
    {
    case 'B':
    case 'C':
    case 'D':
    case 'b':
    case 'c':
    case 'd':
        printf("\n----Wrong.\n");
        def();
        break;
    case 'A':
    case 'a':
        printf("\n----Correct.\n");
        def();
        break;
    case 'Y':
    case 'y':
        system("cls");
        menu();
        break;
    default:
        system("cls");
        question4();
        break;
    }
}

void def()
{

    int n;
    printf("\n\nTry Another? Y|N\n\n");
    n=getch();
    switch(n)
    {case 'Y':
    case 'y':
        system("cls");
        main();
    case 'N':
    case 'n':
        system("cls");
        exit(0);
    default:
        exit(0);
    }
}


















