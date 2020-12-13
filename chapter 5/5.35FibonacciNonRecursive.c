#include<stdio.h>
#include<stdlib.h>
#include<time.h>

unsigned long long int fibonacci(int n);

int main(void)
{
    int n, N;
    printf("Enter number: ");
    scanf("%d", &N);
    for (n = 0; n <= N; n++)
    {
        printf("%d. Fibonacci Number: %llu\n", n, fibonacci(n));
    }
    
    return 0;    
}

unsigned long long int fibonacci(int n)
{
    unsigned long long int a = 0, b = 1, fi = 1;
    for (int i = 0; i <= n - 2; i++)
    {
        fi = a + b;
        a = b;
        b = fi;
    }
    if (0 == n){
    return 0; 
    }else {
        return fi;
    }
}