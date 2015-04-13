#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, a, delay;
    char num[10];
    printf("Enter a number: \a");
    gets(num);
    puts("");
    input=atoi(num);
    for(a=1;a<=input;a++)
    {
        printf("Beep %d \a\n", a);
        for(delay=1;delay<=1E8;delay++);
    }

}
