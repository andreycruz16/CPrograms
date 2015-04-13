#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int num;
    char user_input[10];
    printf("Enter a number to determine if it is positive or negative:");
    gets(user_input);
    num=atoi(user_input);

    if(num>0)
    {
        puts("Positive number.");
    }
    else if(num==0)
    {
        puts("You entered number '0'");
    }
    else if(num<0)
    {
        puts("Negative number.");
    }
    else
    {
        puts("Invalid character.");
    }

}

