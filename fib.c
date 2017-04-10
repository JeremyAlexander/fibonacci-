#include <cs50.h>
#include<stdio.h>

int main()
{
   int a = 0, b = 1, y, c;
 
   printf("Please enter the number of terms: ");
   int n = get_int();
   
   
   if (n >= 0)
      {
         printf("First %i terms of Fibonacci series are: \n", n);
      }
   else
      {
         printf ("Please rerun the program and enter a positive integer \n");
         return 0;
      }
   
for (c = 0; c < n; c++)
   {
   if (c <= 1)
         y = c;
      else
      {
         y = a + b, a = b, b = y;
      }
      printf("%i\n", y);
   }
   
   return 0;
}
