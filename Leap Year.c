#include <stdio.h>
#include <stdlib.h>

int main()

{
        int year;

        printf("Enter a year to check if it is a leap year: ");
        scanf("%d", &year);

        if(year%400==0) printf("\n%d is a leap year.\n", year);
        else if(year%100==0) printf("\n%d is not a leap year\n", year);
        else if(year%4==0)printf("\n%d is a leap year.\n", year);
        else printf("\n%d is not a leap year.\n", year);
        return(0);

}
