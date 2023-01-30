#include <stdio.h>
void main()
{
    int x, sum = 0;
    printf("Enter the number\n");
    scanf("%i",&x);
   

    while (x != 0)
    {
        sum = sum + x % 10;
        x = x / 10;
    }
    printf("%i \n", sum);
}
