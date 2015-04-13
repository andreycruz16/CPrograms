#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char c;
    printf("Would you like your computer to explode?");
    c=getchar();
    if(c=='N'||c=='n')
    {
        printf("Okay. Whew!\n");
    }
    else
    {
        printf("Ok: Configuring your computer to explode now.\n");
        printf("Bye!\n");
    }
    return(0);
}

