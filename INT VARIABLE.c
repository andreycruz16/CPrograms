#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int age;
    char years[10];
    printf("How old as Methuselah?");
    gets(years);
    age=atoi(years);
    printf("Methuselah was %d years old.\n", age);
    return (0);
}
