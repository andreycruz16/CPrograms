#include <stdio.h>
#include <stdlib.h>
#define DELAYTIME 1E8

void dropBomb(void);
void delay(void);

int deaths; /*Global Variable*/

int main()
{
    char x;
    deaths=0;

    for(;;)
    {
        printf("Press ~ then Enter to quit\n");
        printf("Press Enter to drop the bomb:");
        x=getchar();
        fflush(stdin);
        if(x=='~')
        {
            break;
        }
        dropBomb();
        printf("%d people killed!\n", deaths);
    }
    return(0);
}

/*while(x!='~')
    {
        printf("Press ~ then Enter to quit\n");
        printf("Press Enter to drop the bomb:");
        x=getchar();
        fflush(stdin);
        dropBomb();
        printf("%d people killed!\n", deaths);
    }
    return(0);
}*/



void dropBomb()
{
    int x;

    for(x=5;x>1;x--)
    {
        puts("         *");
        delay();
    }
    puts("          BOOM!");
    deaths+=1500;
}
void delay()
{
    long int delay;
    for(delay=0;delay<=DELAYTIME;delay++);
}






