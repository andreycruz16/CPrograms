#include <stdio.h>
#include <string.h>
int main()
{
   char arr1[100], arr2[100], temp[100];
   printf("I. Swapping Strings.\n");
   printf("\nEnter your first string here:");
   gets(arr1);
   printf("Enter your second string here:");
   gets(arr2);

   printf("\nFirst string:%s\nSecond string:%s\n\n", arr2, arr1);
   return 0;
}
