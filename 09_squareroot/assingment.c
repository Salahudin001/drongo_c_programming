// #include <stdio.h>
// #include <math.h>

// int square(int n);

// void main()
// {

//     int n;
//     printf("Enter the number\n");
//     scanf("%i", &n);
//     int result = square(n);
//     printf("%i", result);
// }

// int square(int n)
// {
//     int res = n * n;
//     return res;
// }

#include <stdio.h>
#include <math.h>

int square(int n);

void main()
{
    int n;
    printf("Enter the number \n");
    scanf("%i",&n);
    int result = square (n);
    printf("%i",result);
}
int square(int n){
    int res= n*n;
    return res ;
}
