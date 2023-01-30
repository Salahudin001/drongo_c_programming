#include <stdio.h>
#include <stdbool.h>

#include "login.h"
int main()
{
    bool lg = user_login(1234);
    if (lg)
    {
        printf("Good \n");
       // home();
    }
    else
    {
        printf("Bad \n");
        reset_password();
    }
    return 0;
}