#include <cstdio>
#include <iostream>

 using namespace std;

int main()
{
   int row, c, n=3, temp;

   temp = n;

   for (row=1;row<=n;row++)
   {
      for (c=1;c<temp;c++)
         printf(" ");

      temp--;

      for (c=1;c<=2*row-1;c++)
         printf("*");

      printf("\n");
   }

   return 0;
}
