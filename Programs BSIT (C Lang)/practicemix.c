#include <stdio.h>
int mix(a)
{
if (a<1)
return 1;

return a*mix(a-1);
}
int fact(count)
{
if (count<1)
return 1;
return count*fact(count-1);
}



main()
{
    int num[100], a, ways, b, count, i, prev, lol;
    printf("Enter the number of digits:");
    scanf("%d", &a);
    printf("Enter the digits one by one:\n");
    for (b=0; b<a; b++)
    {
        scanf("%d", &num[b]);
    }
    prev=num[0];
    lol=0;
    count=1;
    for (i=1; i<a; i++)
    {
        if (num[i]==prev)
        {
            count++;
        }
        if(num[i]==lol)
        {
            if (num[i]!=prev)
            count++;
        }


    lol=prev;
    prev=num[i];

    }
    ways=mix(a)/fact(count);
    printf("The possible ways are %d", ways);



}
