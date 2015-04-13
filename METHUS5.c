#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int age, methus, you;
    char years[10];
    printf("How old is Methus?");
    gets(years);
    methus=atoi(years);
    printf("How old are you?");
    gets(years);
    you=atoi(years);
    printf("Methus is %d years old and you are %d years old", methus, you);

}
