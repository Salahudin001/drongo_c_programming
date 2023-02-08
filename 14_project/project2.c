#include <stdio.h>
#include<time.h>
char name[20];
int dip_amt, withdraw_amt, send_money, ph_number, amt = 10000, acc_no = 10, password = 1234;

void deposite_money();
int withdraw_money();
int transfer_money();
int check_balance();
int transaction_details();
void menu();
int main()
{
    int choice;
    printf("Enter your name :");
    scanf("%s", name);

    printf("Enter your account no. :");
    scanf("%d", &acc_no);
    if (acc_no == 10)
    {
    }
    else
    {
        return 0;
    }

    printf("Enter your password:\n");
    scanf("%d", &password);
    if (password == 1234)
    {
    }
    else
    {
        return 0;
    }

    menu();
    printf("Enter your choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        deposite_money();
        break;
    case 2:
        withdraw_money();
        break;
    case 3:
        transfer_money();
        break;
    case 4:
        check_balance();
        break;
    case 5:
        transaction_details();
        break;
    default:
        printf("INVALID CHOICE !!!\n");
        break;
    }

    return 0;
}
void menu()
{
    printf("MAIN MENU\n");
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Transfer Money\n");
    printf("4.check Balance\n");
    printf("5.Transaction Details\n");
    printf("6.Exit\n");
}

void deposite_money()
{
     time_t tm;
      time(&tm);
    FILE *ptr = fopen("account.txt", "a");
    printf("DEPOSITING MONEY \n");
    printf("Enter the amount :");
    scanf("%d", &dip_amt);

    amt = amt + dip_amt; // amt+=dip_amt;

    printf("MONEY DEPOSITED \n");
    printf("Current Balance : %d\n", amt);
    fprintf(ptr, "ksh %d had been deposited to your account\n", dip_amt);
    fprintf(ptr,"Date/time of transaction %ld",tm);
}

int withdraw_money()
{
    FILE *ptr = fopen("account.txt", "a");
    printf("WITHDRAWING MONEY\n");
    printf("Enter the amount\n");
    scanf("%d", &withdraw_amt);

    if (withdraw_amt < amt)
    {
        amt = amt - withdraw_amt;
        printf("ksh %d was withdrawn successfuly \n", withdraw_amt);
        printf("current balance is :ksh %d\n", amt);
        fprintf(ptr, "ksh %d has been withdrawn from your account\n",withdraw_amt);
    }
    else
    {
        printf("You have insufficent balance in your account %d ", amt);
    }

}
int transfer_money()
{
    FILE *ptr = fopen("account.txt", "a");
    printf("TRANSFER MONEY\n");
    printf("Enter amount :\n");
    scanf("%d", &send_money);

    if (send_money < amt)
    {

        amt = amt - send_money;
        printf("Enter phone number \n");
        scanf("%d", &ph_number);

        printf("ksh%d was sent successfuly to %d\n", send_money, ph_number);
        printf("Thank you for using our servece\n");
         fprintf(ptr, "you have sent ksh %d to account\n",send_money);
    }
    else
    {
        printf(" You have insuffient balance in your account !!! \n");
        printf("your balance is %d\n", amt);
    }
}

int check_balance()
{
    FILE *ptr = fopen("account.txt","a");
    printf("Checking Balance\n");
    printf("your bank account balance is ksh%d\n", amt);
     fprintf(ptr, "your account balance is ksh %d\n",amt);
}
int transaction_details()
{
}
