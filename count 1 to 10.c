#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ctr=1, delay, dots;
    for(;;)
    /*{
        printf("%d\n", ctr);
        ctr+=2;
        for(delay=1;delay<=1E8;delay++);
    }*/

    for(;;ctr++)
    {
        printf("%2d", ctr);
        for(dots=1;dots<=4;dots++)
        {
            printf(".");
            for(delay=1;delay<=1E8;delay++);
        }
        puts("");
        for(delay=1;delay<=1E8;delay++);
        if(ctr==10)
        {
            system("cls");
            ctr=0;
        }
    }

}
