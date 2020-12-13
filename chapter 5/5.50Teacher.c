#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int question(void);

int main(void)
{
    int i;
    srand(time(NULL));
    do
    {
        i = question();
    } while (i);
    printf("See you again :)\n");

    return 0;
}
int question(void)
{
    int answer, x, y, result;
    x = rand() % 10 + 1;
    y = rand() % 10 + 1;
    result = x * y;
    printf("How much is %d times %d (-1 to end!): ", x, y);
    scanf("%d", &answer);
    if (-1 == answer)
    {
        return 0;
    }
    else 
    {
        while (answer != result)
        {
            printf("False. Try again: ");
            scanf("%d", &answer);
        }
        printf("Correct.\n");
        return 1;
    }
}