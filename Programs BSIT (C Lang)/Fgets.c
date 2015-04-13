#include <stdio.h>

int main()
{
        char name[50];
        puts("Input your name here: "); //you can change the "puts" to "printf"
        fgets(name,50,stdin);
        printf("your name is %s", name);
        return(0);
}
