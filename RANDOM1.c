#include <stdio.h>
#include <stdlib.h>

int rnd(void);

int main()
{
    int x;
    puts("Behold! 100 Random Numbers!");
    for(x=0;x<100;x++)
        printf("%d\t", rnd());
    return (0);
}

int rnd(void)
{
    int r;
    r=rand();
    return(r);
}
