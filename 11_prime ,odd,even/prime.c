#include <math.h>
#include <stdio.h>

void main()
{
    int x, y;
    for (x = 2; x <= 25; x++)
    {
        for (y = 2; y <= x; y++)
        {
            if (x % y == 0)
            {
                break ;
            }
        }
        if (x == y)
        {
            printf("%i it is a prime number\n",x);
        }
    }
}