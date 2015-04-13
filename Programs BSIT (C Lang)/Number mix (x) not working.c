#include<stdio.h>
#include<string.h>
#define N 10

void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d", num[i]);
    printf("\n");
}
int main()
{
    int num[N];
    int *ptr;
    int temp;
    int i, n, j;
    printf("NUMBER MIX");
    printf("\nHow many digits you want to enter?: ");
        scanf("%d", &n);
    system("cls");
    printf("NUMBER MIX\nEnter the %d digits to see all combinations.\n(Use space before entering the next number.)\nEnter here:",n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for (j=1;j<=n;j++)
        {
        for(i=0;i<n-1;i++)
        {
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
            print(num,n);
	}
    }
    if(n==2)
    printf("\nNumber of posible Number mix:%d\n\n",n*2);
    else if(n==3)
    printf("\nNumber of posible Number mix:%d\n\n",n*2);
    else if(n==4)
    printf("\nNumber of posible Number mix:%d\n\n",n*3);
    else if(n==5)
    printf("\nNumber of posible Number mix:%d\n\n",n*4);
    else if(n==6)
    printf("\nNumber of posible Number mix:%d\n\n",n*5);

    return 0;
}
