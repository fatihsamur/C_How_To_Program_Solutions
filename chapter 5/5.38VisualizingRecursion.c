#include<stdio.h>

int fact(int);
int factorial(int, int);

int main(void)
{
    int i = factorial(6, 1);
     
    return 0;
}

// Stackoverdan alıntı
int factorial(int number, int depth)
{
    printf("%*s entered, number = %d\n", 2*depth, "", number);
    int result = 1;
    if (number > 1) 
    result = number * factorial(number-1, depth + 1);
    printf("%*s exit,  result = %d\n", 2*depth, "", result);
    return result;
}
