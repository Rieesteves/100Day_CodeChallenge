//sum of indi digits

#include <stdio.h>
int main()
{
   int n, t, sum = 0, remainder;
   printf("Enter an integer: "); //integer input
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder; //sum
      t         = t / 10;
   }

   printf("\nSum of individual digits of number '%d' = %d\n", n, sum);
//print statement
   return 0;
}

