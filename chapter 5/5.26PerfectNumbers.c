#include<stdio.h>

int isPerfect(int n);
void printFactors(int n);

int main(void)
{
    int number;
    for (number = 1; number <= 10000; number++)
    {
        if (isPerfect(number))
        {
            printf("%d is perfect because: \n", number);
            printFactors(number);
            printf("= %d\n\n", number);
        }
    }

    return 0;
}

int isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i; 
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}    

void printFactors(int n)
{
    int i;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d + ", i); 
        }
    }
}