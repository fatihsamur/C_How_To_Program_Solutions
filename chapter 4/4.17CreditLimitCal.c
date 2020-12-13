#include<stdio.h>

// calculating credit limit; Exercise 4.17
int main(int argv, char const argc[])
{
    int account, exLimit, balance;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter account number: ");
        scanf("%d", &account);
        printf("Enter customer's limit bevore recession: ");
        scanf("%d", &exLimit);
        printf("Enter customer's current balance: ");
        scanf("%d", &balance);
        printf("New credit limit: %d\n", exLimit / 2);
        if (balance > exLimit / 2)
        {
            printf("Customer #%d is exceed new credit limit!\n", account);
        }

    }
    
    return 0;

}