#include<stdio.h>
#include<math.h>

int main(int argv, char const argc[])
{   
    int N;
    int sum, sumOfSquare, sumOfCube;
    sum = sumOfSquare = sumOfCube = 0;
    printf("Enter the value: ");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        sum += i;
        sumOfSquare += i * i;
        sumOfCube += i * i * i;
    }
    printf("sum is: %d\nsum of squares is: %d\nsum of cubes: %d\n", sum, sumOfSquare, sumOfCube);

    return 0;
}