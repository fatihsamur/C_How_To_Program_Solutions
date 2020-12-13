#include<stdio.h>
#include<math.h>

// ASCII Table

int main(int argv, char const argc[])
{
    for (int i = 0; i <= 127; i++)
    {
        printf("%3d %3c\n", i, i);
    }
 
    return 0;

}