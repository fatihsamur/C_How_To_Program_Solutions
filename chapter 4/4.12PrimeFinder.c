#include<stdio.h>
#include<math.h>

int main(int argv, char const argc[])
{   
    int max, number; 
    printf("Enter max value of interval: ");
    scanf("%d", &max);
    int counter = 1;   
    for (number = 2; number <= max; number++)   
    {
        int i = 2;    
        while ((number % i != 0) && (i <= number / 2))    
        {
            i++;
        }
        if (i == (number / 2) + 1)    
        {
            printf("%d  ", number);
            counter++;   
        }
    }
    printf("\nThere are %d prime numbers smaller then %d\n", counter, max);

    return 0;

}