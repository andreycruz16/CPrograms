#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, delay;
    for(i=1;i<=10;i++)
    {
        printf("%d\n", i);
        for(delay=0;delay<=1E8;delay++);
    }
}
