#include <stdio.h>
void main(){
    double a , b ;
    printf("Enter the first number\n");
    scanf("%lf",&a);
    printf("Enter the second number\n");
    scanf("%lf",&b);

    int sum = a+b ;
    printf("the sum is %i\n",sum);
    int sub = a-b ;
    printf("the sub is %i\n",sub);
    int mult = a*b;
    printf("the mult is %i\n",mult);
    double div = a/b;
    printf("the div is %.2lf \n",div);
    
    }