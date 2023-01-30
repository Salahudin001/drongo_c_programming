#include <stdio.h>

void main()
{
    int a, b, i, number;
    printf("Enter a \n");
    scanf("%i", &a);

    printf("Enter b\n");
    scanf("%i", &b);

    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            printf("%i is divisible by 3 \n",i);
        }
    }
}