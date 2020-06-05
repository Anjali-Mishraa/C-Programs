#include <stdio.h>
int main ()
{
  int a,b;
  printf ("Enter two numbers");
  scanf ("%d %d",&a,&b);
  //printing the original values
  printf ("Values before swapping :\n");
  printf ("Value of a = %d and Value of b = %d",a,b);
  //swapping
  a = a+b;
  b = a-b;
  a = a-b;
  //printing the swapped values
  printf ("\nValues after swapping :\n");
  printf ("Value of a = %d and Value of b = %d",a,b);
  return 0;
}
