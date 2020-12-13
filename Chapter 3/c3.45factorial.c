#include<stdio.h>
#include<limits.h>

// ?????????????????

int main(int argc, char const *argv[])
{
    int sum = 1;
    int number;
    int first;
    printf("enter number: ");
    scanf("%d", &number);
    first = number;
    while (number > 1)
    {
        sum = sum * number;
        number--;
    }
    printf("%d! is: %d\n", first, sum);

    return 0;
}