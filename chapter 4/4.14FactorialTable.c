#include<stdio.h>
#include<math.h>

// factorial table of numbers from 0 to 10
int main(int argv, char const argc[])
{   
    int number;
    int fac = 1;
    printf("%6s %10s\n", "Number", "Factorial");
    printf("%6s! %10s\n", "0", "1");
    for (number = 1; number <= 10; number++)
    {
        for (int i = 1; i <= number; i++)
        {
            fac = fac * i;
        }
        printf("%6d! %10d\n", number, fac);
        fac = 1;
    }
    
    return 0;
}