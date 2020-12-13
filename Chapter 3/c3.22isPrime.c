#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter number (-1 to end): ");
    scanf("%d", &number);
    while (number != -1)
    {
        int i = 2;
        while (number % i != 0)
        {
            i++;
        }
        if (i == number)
        {
            printf("number %d is prime.\n", number);
        }
        else
        {
            printf("number %d is not a prime number.\n", number);
        }
        printf("Enter number (-1 to end): ");
        scanf("%d", &number);
    }
        
    return 0;
}