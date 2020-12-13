#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    // find the frist two largest value of some numbers
    int number, largest, second;
    largest = 0;
    second = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &number);
        if (number > largest)
        {
            second = largest;
            largest = number;
        }
    }
    printf("first is: %d, second is: %d\n", largest, second);
        
    return 0;
}