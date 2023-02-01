#include<stdio.h>

void main()
{

    int score[] = {76, 92, 83, 80, 40, 35, 37, 66, 58, 43, 56, 96, 65, 64, 47, 89};
    int sum = 0;
    for (int x = 0; x <= 16; x++)
    {
       sum = sum + score[x];
       printf("The sum is %i \n", sum);
    //    sum += score[x];
    }

   printf("The total sum is %i \n", sum);
}