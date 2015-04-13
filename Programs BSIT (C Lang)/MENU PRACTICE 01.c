#include<stdio.h>
main()
{
    menu();
}

void menu()
{
    char a;
    printf("I.\n\nDo you want to open notepad? Y or N.");
    a=getch();
    switch(a)
    {
        case'Y':
            system("notepad.exe");
            system("cls");
            printf("You opened notepad.");

        case'y':
            system("notepad.exe");
            system("cls");
            printf("You opened notepad.");

        case'N':
            system("cls");
            exit(0);

        case'n':
            system("cls");
            exit(0);

        default:
            system("cls");
            printf("Invalid Character.");

    }

}
