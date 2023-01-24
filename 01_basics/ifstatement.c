#include <stdio.h>
void main()
{
   int a;
   int b;
   scanf("%i", &a);
   scanf("%i", &b);

   int c  = a+b;
   if (a > b)
   {
     printf("a is bigger \n");
   }
   else
   {
       printf("b is bigger \n");
   }
}