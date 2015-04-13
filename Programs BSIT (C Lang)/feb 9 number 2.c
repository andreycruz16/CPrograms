#include<stdio.h>
void main()
{
    int arr[100], i, n, sum=0;
    printf("Enter the elements:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    printf("\nEnter element %d: ", i);
    scanf("%d", &arr[i]);
    }
for(i=1;i<n;i++)
{
    sum=sum+arr[i];

}
    printf("\nSum of array element: %d\n\n", sum);
    return;
}
