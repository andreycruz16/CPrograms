#include <stdio.h>
#include <stdlib.h>
int main ()
{
    unsigned char a;

    for(a=32;a<128;a=a+1)
        printf("%3d = '%c'\t",a ,a); /*The %3d uses three characters to print. the empty space is the third.*/
    return(0);
}

