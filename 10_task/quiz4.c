#include <stdio.h>

void main()
{

    double BMI, mass, height, lbs;

    printf("Enter your mass in lbs\n");
    scanf("%lf", &mass);

    printf("Enter your height in whole inches\n");
    scanf("%lf", &height);

    BMI = (mass / (height * height));
    if (BMI < 15)
    {
        printf("severely underweight\n");
    }
    else if (15 <= BMI < 16)
    {
        printf("Underweight\n");
    }
    else if (16 <= BMI < 18.5)
    {
        printf("Normal\n");
    }
    else if (18.5 <= BMI < 25)
    {
        printf("Overweight\n");
    }
    else if (25 <= BMI < 30)
    {
        printf("Obese class I\n");
    }
    else if (30 <= BMI < 35)
    {
        printf("Obese class II\n");
    }
    else if (35 <= BMI < 40)
    {
        printf("Obese class III\n");
    }
    else
    {
        printf("Very severely underweight\n");
    }
}