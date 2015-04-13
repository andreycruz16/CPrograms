#include<stdio.h>
int main()
{
    int array[100], max, size, c,location=1, sum=0;
    printf("Enter the number of elements:");
    scanf("%d", &size);
    printf("Enter %d integers:\n\n", size);
    for(c=0;c<size;c++)
    scanf(" %d", &array[c]);
    max=array[0];
    for(c=1;c<size;c++)
    {
        if(array[c]>max)
        {
            max=array[c];
            location=c+1;
        }
    }
    for(c=1;c<size;c++)
{
    sum=sum+array[c];

}
    printf("\nSum of array element: %d\n\n", sum);


    printf("Maximum element is at location %d and its value is %d\n", location, max);
    return 0;

}
