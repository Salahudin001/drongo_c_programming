#include <stdio.h>
#include<stdlib.h>
int signup ();
void main()
{
    int number;
    printf("Enter number betweekn 1 and 3 \n");
    scanf("%i", &number);
    switch (number)
    {
    case 1:
        printf("Login \n");
        break;
    case 2:
      printf("signup\n");
        break;
    case3:

    case 3:
        printf("Forget password");
        break;
    dafault:
        printf("please select correct option\n ");
        break ;
    }
    printf("Outside \n");
}