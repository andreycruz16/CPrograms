#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char key;

    puts("type your favorite keyboard character:");
    scanf("%c", &key);
    printf("Your favorite character is %c!\n", key);
    return(0);
}
