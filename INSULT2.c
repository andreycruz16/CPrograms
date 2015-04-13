#include <stdio.h>
int main ()
{
    char jerk[20];

    puts("Name of some jerk you know: ");
    gets(jerk);
    puts("Yeah. I think %s is a jerk too.", jerk);
}
