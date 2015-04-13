#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int methus;
    int mark;
    char years[8];

    printf("How old are you? ");
    gets(years);
    mark=atoi(years);

    printf("How old was Methuselah? ");
    gets(years);
    methus=atoi(years);

    printf("\n\nYou are %d years old.\n", mark);
    printf("Methuselah was %d years old.\n", methus);
    return(0);
}
