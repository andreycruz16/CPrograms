#include <stdio.h>
#include <stdlib.h>
int main ()
{
    puts("Start typing.");
    puts("Press ~ then Enter to stop");

    while(getchar()!='~') /*Using this will not save any sata on the variable bacause there is no variable declared */
        ;
    printf("Thanks!\n");
    return(0);
}

