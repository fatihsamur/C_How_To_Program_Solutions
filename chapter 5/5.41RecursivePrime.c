#include<stdio.h>

int isPrime(int x);

int halfNumber; // global varible

int main(void)
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    halfNumber = number / 2;
    if (isPrime(number))
    {
        printf("Prime.\n");
    }else
    {
        printf("Not prime.\n");
    }
    
    return 0;
}

int isPrime(int x)
{
    if (x <= 1)
    return 0;
    if (halfNumber == 1)
    {
        return 1;
    }
    else if (x % halfNumber == 0)
    {
        printf("%d evenly divided by %d\n", x, halfNumber);
        return 0;
    }
    else
    {
        halfNumber--;
        printf("%d can not divided by %d\n", x, halfNumber);
        isPrime(x);
    }
}
