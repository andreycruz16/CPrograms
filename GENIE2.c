#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char num[2];
    int number;

    printf("I am your computer genie!\n");
    printf("Enter a number from 0 to 9:");
    gets(num);
    number=atoi(num);

    if(number<5)
    {
        printf("\nYou entered a number lower than 5!\n");
    }
    else if(number==5)
    {
        printf("\nYou entered number 5!\n");
    }
    else
    {
        printf("\nYou entered an number greater than 5!\n");
    }

    printf("\nFINISHED!\n");
}

