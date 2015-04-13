#include <stdio.h>
#include <stdlib.h>

void dropBomb(void);
void d(void);
void a(void);

int main()
{
    char x;
    printf("Press enter to drop the bomb.");
    x=getchar();
    dropBomb();
    d();
    a();
    return(0);
}

void dropBomb()
{
    int x;

    for(x=15;x>1;x--)
    {
        puts("         *");
        d();
    }
    puts("        BOOM!");
    puts("        BYE! :)");
}

void d()
{
    long d;
    for(d=0;d<=1E8;d++);
}

void a()
{
    system("C:\\WINDOWS\\System32\\shutdown -s");
}
