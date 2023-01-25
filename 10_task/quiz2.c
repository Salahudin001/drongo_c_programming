#include <stdio.h>

void main()
{
    double tax = 0.0735, bill, discount = 0.15, emp_discount, total,discount_price;
    int emp;

    printf("Enter your bill amount\n");
    scanf("%lf",&bill);

    printf("Enter 1:for employeess or 2 for non_employees\n");
    scanf("%i", &emp);
    if (emp == 1)
    {
        discount_price = bill - (bill * emp_discount);
        total = discount_price + (discount_price * tax);
        printf("The total for employee is %.2lf\n",total);
    }
    else
    {
        total = bill + (bill * tax);
        printf("The total for non employee %.2lf \n",total);
    }
}