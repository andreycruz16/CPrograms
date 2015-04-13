#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char c;
    int done;
    float total=0;

    printf("Please make your treat selection:\n");
    printf("1 - Beverage.\n");
    printf("2 - Candy.\n");
    printf("3 - Hot dog.\n");
    printf("4 - Popcorn.\n");
    printf("Your choice:");

    done=0; /* The value of 0 is FALSE*/
    while(!done) /* (!done) means "not done"*/
    {
        c=getchar();
        switch(c)
        {
            case '1':
                printf("Beverage\tThat will be $8.50\n");
                total+=8;
                break;
            case '2':
                printf("Candy\t\tThat will be $5.50\n");
                total+=5.5;
                break;
            case '3':
                printf("Hot dog\t\tThat will be $10.00\n");
                total+=10;
                break;
            case '4':
                printf("Popcorn\t\tThat will be $7.50\n");
                total+=7.5;
                break;
            case '=':
                printf("\t\t= Total of $%.2f\n", total);
                printf("Please pay the cashier.\n");
                done=1; /* The value of 1 is TRUE*/
                break;
            default:
                printf("Improper selection.\n");
        }
    }
    return(0);

}
