#include <stdio.h>
#include <stdlib.h>

int getval(void);

int main()
{
    int age, favnum, zip;
    float iq;

    printf("This program will calculate your IQ level.\n\n");
    printf("Enter your age here:");
    age=getval();
    printf("Enter you favorite number here:");
    favnum=getval();
    printf("Enter your ZIP code here:");
    zip=getval();

    iq=(float)(age+zip)/favnum; /* Insert a float to make the answer a decimal*/
    printf("\nYour estimated IQ level is %.2f\n", iq);
}

int getval(void)
{
    char input[20];
    int x;
    gets(input);
    x=atoi(input);
    return(x);

}
