#include <stdio.h>
main ()
{
    int a, n1, n2, sum, diff, prod, quo;
    char ch;
    start:
        printf(" Choose one of the following: 1 2 3");
        scanf("%d",&a);
        switch (a)
        {
            case 1: printf("Hello World");
                break;
            case 2: n1=10, n2=10;
                    sum=n1+n2;
                    diff=n1-n2;
                    prod=n1*n2;
                    quo=n1/n2;
                    printf("%d\n%d\n%d\n%d\n", sum,diff,prod,quo);
                    break;

        }
        printf("Do you want to proceed? Y/N:");
        scanf(" %s", &ch);
        switch (ch)
        {
        case 'Y':
            goto start;
            break;
        default:
            printf("?????");
        }

}
