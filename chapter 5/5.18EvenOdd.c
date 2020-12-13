#include<stdio.h>

int isEven(int x);

int main(int argv, char const argc[])
{   
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    if (isEven(x))
    {
        printf("Even!\n");
    }else
    {
        printf("odd!\n");
    }
    
    return 0;
}

int isEven(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }else
    {
        return 0;
    }
    
   
}