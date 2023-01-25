#include <stdio.h>

void main()
{

    printf("Enter number of days\n");
    
    int total_days, weeks, days, years;
    scanf("%i", &total_days);

    years = total_days / 365;
    printf("the years are%i\n", years);

    weeks = (total_days % 365) / 7;
    printf("the weeks are %i\n ", weeks);

    days=(total_days % 365)  % 7;
    printf("the number of days are %i\n",days);
}
