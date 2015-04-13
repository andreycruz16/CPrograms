#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter an positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n!=1)
     return n*factorial(n-1);
}
