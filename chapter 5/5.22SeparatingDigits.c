#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

// a very futile program to make functions

int integerPart(int x, int y);
int remainderPart(int x, int y);
void separator(int N);

int main(int argv, char const argc[])
{   
    int number;
    srand(time(NULL));
    number = rand();
    printf("%d\n", number);
    separator(number);

    return 0;
}

int integerPart(int x, int y)
{
    return (x / y);
}

int remainderPart(int x, int y)
{
    return (x % y);
}

void separator(int N)
{
    int i = 0, j, temp = N;
    while (temp > 0)
    {
        temp /= 10; 
        i++;
    }
     
    temp = 1;
    for (j = 0; j < i; j++)
    {
        temp *= 10;
    }
     
    for (j = 0; j < i; j++)
    {
        temp /= 10;
        printf("%d  ", integerPart(N, temp));
        N = remainderPart(N, temp);
    }
    puts("");
}