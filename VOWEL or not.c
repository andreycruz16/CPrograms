#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    printf("Type a letter to determine if it is vowel or not.\nEnter Here: ");
    i=getchar();
    fflush(stdin);
    if(i=='a'||i=='A'||i=='e'||i=='E'||i=='i'||i=='I'||i=='o'||i=='O'||i=='u'||i=='U')
    {
        printf("\nLetter '%c' is vowel.\n\n", i);
    }
    else
    {
        printf("\nLetter '%c' in consonant.\n\n", i);
    }
    return(0);
}
