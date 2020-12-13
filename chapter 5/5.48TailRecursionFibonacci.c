// fibonacci calculator with tail recursion

#include<stdio.h>

int fibonacciR(int, int, int);
int fibonacci(int n);

int main() 
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        printf("%d. fibonacci number is: %d\n", i, fibonacci(i));
    }
    
    return 0; 
} 

// real fibonacci calculator
int fibonacciR(int n, int x, int y)
{
    if (0 == n)
    {
        return x;
    }
    else if (1 == n)
    {
        return y;
    }
    else
    {
        return fibonacciR(n - 1, y, x + y);
    }
}

// connector function;
int fibonacci(int n)
{
    return fibonacciR(n, 0, 1);
}