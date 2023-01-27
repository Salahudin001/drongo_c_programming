#include <stdio.h>

//void main()
//{
    //int number[] = {9, 7, 5, 9, 4, 2, 6, 8, 9, 5, 83, 4, 13, 5};
    // int odd , even ;
    //int odd = 0, even = 0;
    //for (int i = 0; i < 14; i++)
    //{
        //if (number[i] % 2 == 0)

        //{
            //printf("Even\n");
          //  even = even + 1;
        //}
        //else
        //{
          //  printf("odd\n");
        //    odd = odd + 1;
      //  }
    //}
    //printf("this is total odd %i\n", odd);
   // printf("this is total even%i\n", even);
    // printf("The total sum is%i\n", sum);
//}

void main()
{
    int number[] = {9, 3, 2, 5, 9, 8, 4, 9, 4, 6, 80, 14};
    int odd = 0, even = 0;
    for (int i = 0; i <= 12; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("even\n");
            even = even + 1;
        }
        else
        {
            printf("odd \n");
            odd = odd + 1;
        }
    }
    printf("This is total odd %i\n",odd);
    printf("This is total even %i\n",even);

}