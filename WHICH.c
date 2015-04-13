#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char key;

    printf("Press a key on your keyboard:");
    key=getchar();
    printf("You pressed the '%c' key.", key);
    printf("Its ASCII value is %d.\n", key);
    return(0);
}
