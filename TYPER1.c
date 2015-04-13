#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char ch;

    puts("Start typing");
    puts("Press ~ then Enter to stop");

    while(ch!='~')
    {
        ch=getchar();
    }


    /*for(;;)
    {
        ch=getchar();
        fflush(stdin);
        if(ch=='~')
        {
            break;
        }
    }*/
    printf("Thanks!\n");
    return(0);
}

