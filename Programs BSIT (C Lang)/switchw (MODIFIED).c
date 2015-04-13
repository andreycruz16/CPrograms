#include<stdio.h>
#include<stdlib.h>
main()
{

    menu();

}

void menu()
{
    int n;
    printf("I.\n\n");
    printf("1 = EXERA1\n");
    printf("2 = EXERA2\n");
    printf("3 = EXERA3\n");
    printf("4 = EXERA4\n");
    printf("5 = EXERA5\n");
    printf("6 = EXERA6\n");
    printf("7 = EXERA7\n");
    printf("\nEnter a number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        system("cls");
        exerA1();
        break;
    case 2:
        system("cls");
        exerA2();
        break;
    case 3:
        system("cls");
        exerA3();
        break;
    case 4:
        system("cls");
        exerA4();
        break;
    case 5:
        system("cls");
        exerA5();
        break;
    case 6:
        system("cls");
        exerA6();
        break;
    case 7:
        system("cls");
        exerA7();
        break;
    default:
        system("cls");
        def();
        break;
    }
}

void exerA1()
{
    printf("II.\n\nEXER A1:\n");
    printf("\nHELLO WORLD\n");
    def();
}

void exerA2()
{
    int n1=10,n2=10,s,p,d,q;
    printf("II.\n\nEXER A2:\n");
    s=n1+n2;
    printf("\nsum:%d\n",s);
    d=n1-n2;
    printf("difference:%d\n",d);
    p=n1*n2;
    printf("product:%d\n",p);
    q=n1/n2;
    printf("quotienII.\n\nt:%d\n",q);

    def();
}

void exerA3()
{
    float n1,n2,s,d,p,q;
    printf("II.\n\nEXER A3:\n");
    printf("\nEnter the first number:\n");
    scanf("%f",&n1);
    printf("Enter the second number:\n");
    scanf("%f",&n2);
    s=n1+n2;
    d=n1-n2;
    p=n1*n2;
    q=n1/n2;
    printf("\nSum=%.f\n",s);
    printf("Difference=%.f\n",d);
    printf("Product=%.f\n",p);
    printf("Quotient= %.2f\n",q);
    def();

}

void exerA4()
{
    int n, c, sq;
    printf("II.\n\nEXER A4:\n");
    printf("\nEnter a number:\n");
    scanf("%d",&n);
    sq=n*n;
    c=n*n*n;
    printf("Square: %d\n",sq);
    printf("Cube: %d\n",c);
    def();
}

void exerA5()
{
    float ave,p,m,f;
    printf("II.\n\nEXER A5:\n");
    printf("\nEnter Prelim: \n");
    scanf("%f",&p);
    printf("Enter Midterm: \n");
    scanf("%f",&m);
    printf("Enter Final: \n");
    scanf("%f",&f);
    ave=(p+m+f)/3;
    printf("Average:%.2f\n",ave);
    def();
}

void exerA6()
{
    int snum;
    char sname[50];
    float us,up,ts;
    printf("II.\n\nEXER A6:\n");
    printf("\nSalesman Number:");
    scanf("%d",&snum);
    printf("Salesman Name:");
    scanf("%s",sname);
    gets(sname);
    printf("Unit Sold:");
    scanf("%f",&us);
    printf("Unit Price:");
    scanf("%f",&up);
    ts=us*up;
    printf("Total Sales:%.2f\n",ts);
    def();
}

void exerA7()
{
int a,b;
printf("II.\n\nEXER A7:\n");
printf("\nEnter the 1st number:\n");
scanf("%d", &a);
printf("Enter the 2nd number:\n");
scanf("%d", &b);
a=(a*b)/(b=a);
printf("1st number = %d \n2nd number = %d ",a,b);
def();
}

void def()
{
    char i;
    printf("\nDo you want to go back?\nY or N:");
    i=getch();
    switch(i)
    {
    case 'Y':
        system("cls");
        menu();
        break;
    case 'y':
        system("cls");
        menu();
        break;
    case 'n':
        exit(0);
    case 'N':
        exit(0);
    default:
        def();
    }
}
