#include<stdio.h>

int main(int argv, char const argc[])
{
    int N, i, rem10, rem50, nbX;
    for (N = 1; N <= 100; N++)
    {
        printf("%-3d:", N);
        if (N == 100)
        {
            printf("C");
        }
        if (N >= 50 && N != 100)
        {
            printf("L");
            rem50 = N - 50;
            nbX = rem50 / 10;
            for (i = 0; i < nbX; i++)
            {
                printf("X");
            }
            rem10 = rem50 % 10;
            if (rem10 < 4)
            {
                for (i = 0; i < rem10; i++)
                {
                    printf("I");
                }
            }
            else if (rem10 == 4)
            {
                printf("IV");
            }
            else if (rem10 >= 5 && rem10 < 9)
            {
                printf("V");
                for (i = 0; i < rem10 - 5; i++)
                {
                    printf("I");
                }
            }
            else if (rem10 == 9)
            {
                printf("IX");
            }
        }
        if (N < 50)
        {
            nbX = N / 10;
            for (i = 0; i < nbX; i++)
            {
                printf("X");
            }
            rem10 = N % 10;
            if (rem10 < 4)
            {
                for (i = 0; i < rem10; i++)
                {
                    printf("I");
                }
            }
            else if (rem10 == 4)
            {
                printf("IV");
            }
            else if (rem10 >= 5 && rem10 < 9)
            {
                printf("V");
                for (i = 0; i < rem10 - 5; i++)
                {
                    printf("I");
                }
            }
            else if (rem10 == 9)
            {
                printf("IX");
            }
        }
        puts("");
    }
    
    return 0;

}