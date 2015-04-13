#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char weight[10];
    int w;

    printf("Enter your weight:");
    gets(weight);
    w=atoi(weight);

    printf("Here is what you weigh now: %d\n", w);
    w++;
    printf("Your weight after the potatoes: %d\n", w);
    w++;
    printf("Your weight after the mutton: %d\n", w);
    w=w+8;
    printf("And you weight after dessert: %d pounds!\n", w);
    printf("Lardo!\n");
    return(0);
}
