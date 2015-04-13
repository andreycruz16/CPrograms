/*Dela Cruz, Mark Andrey*/
/*2014-00084-TG-0*/
#include <stdio.h>
/*a program that will find the GCF of 2 integer*/

int main()
{
  int a, b, c, gcf;

  printf("Enter first integer:"); /*will ask for integer*/
  scanf("%d", &a);
  printf("Enter second integer:"); /*will ask for integer*/
  scanf("%d", &b);

  while (b != 0) /*if b is not equal to*/
  {
    c = b;
    b = a % b;
    a = c;
  }

  gcf = a; /*GCF is equal to a*/

  printf("\nGreatest Common Factor of %d and %d = %d\n", a, b, gcf); /*will print the GCF*/

  return 0;
}
