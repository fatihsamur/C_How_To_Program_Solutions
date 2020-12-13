#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    int x = 100;
    int x1, x2, x3, t1, t2, sum;
    int i = 0;
    while (x < 1000)
    {
        x1 = x % 10;
        t1 = x / 10;
        x2 = t1 % 10;
        t2 = t1 / 10;
        x3 = t2 % 10;
        sum = (x1 * x1 * x1) + (x2 * x2 * x2) + (x3 * x3 * x3);
        if (sum == x)
        {
            i++;
            printf("%d. Armstrong Number is: %d\n",i, x);
        } 
        x++;
    }
    printf("There are %d Armstrong Number betwen 99 and 1000\n", i);


    return 0;
}