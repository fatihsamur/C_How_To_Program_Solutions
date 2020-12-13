#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    int upper, trunk, space, N;
    printf("enter side: ");
    scanf("%d", &N);
    for (upper = 0; upper < N; upper++)
    {
        printf("##");
    }
    printf("\n");
    for (trunk = 0; trunk < N - 2; trunk++)
    {
        printf("|");
        for (space = 0; space < 2 * N - 2; space++)
        {
            printf(" ");
        }
        printf("|\n");
    }
    for (upper = 0; upper < N; upper++)
    {
        printf("##");
    }
    puts("");

    

    return 0;
}