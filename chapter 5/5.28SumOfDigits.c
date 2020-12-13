#include<stdio.h>

int sumOfDigit(int x);

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("sum of digits: %d\n", sumOfDigit(number));

    return 0;

}

int sumOfDigit(int x)
{
    int digit, sum = 0;
    while (x > 0)
    {
        digit = x % 10;
        sum += digit;
        x /= 10;
    }
    return sum;
}