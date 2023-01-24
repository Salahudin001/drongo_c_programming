#include <stdio.h>

void main()

{
    int score[] = {46, 87, 45, 49, 88, 87, 95, 66, 97, 12, 23, 49, 87, 96, 23, 99, 56, 75, 75, 96};
    int pass = 0, fail = 0;
    int A = 0, B = 0, C = 0, D = 0, E = 0;
    for (int x = 0; x <= 20; x++)
    {
        //  printf("this is posion %i,%i\n", x, [x]score);
        if (score[x] > 90)
        {
            A = A + 1;
            printf("This is an A\n");
            pass = pass + 1;
        }
        else if (score[x] > 80)
        {
            A = A + 1;
            printf("This is an A-\n");
            pass = pass + 1;
        }
        else if (score[x] > 70)
        {
            B = B + 1 ;
            printf("This is a B+ \n");
            pass = pass + 1;
        }
        else if (score[x] > 60)
        {
            B = B + 1 ;  
            printf("This is a B \n");
            pass = pass + 1;
        }
        else if (score[x] > 55)
        {
            B = B + 1 ;
            printf("This is a B- \n");
            pass = pass + 1;
        }
        else if (score[x] > 50)
        {
            C = C + 1 ;
            printf("This is a C+ \n");
            pass = pass + 1;
        }
        else if (score[x] > 45)
        {
            C = C + 1 ;
            printf("This is a C \n");
            pass = pass + 1;
        }
        else if (score[x] > 40)
        { 
            C = C + 1 ;
            printf("This is a C- \n");
            pass = pass + 1;
        }
        else
        {
            
            printf("This is a Fail\n");
            fail = fail + 1;
        }
    }

    printf("Total A are %i \n", A);
    printf("Total B are %i \n", B);
    printf("Total C are %i \n", C);
    printf("Pass %i \n", pass);
    printf("Fail %i \n", fail);
}