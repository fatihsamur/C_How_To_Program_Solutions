#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int question(void);
void responseFalse(void);
void responseCorrect(void);

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
            responseFalse();
            scanf("%d", &answer);
        }
        responseCorrect();
        return 1;
    }
}

void responseFalse(void)
{
    int i = rand() % 4 + 1;
    switch (i)
    {
    case 1:
        printf("No. Please try again.\n");
        break;
    case 2:
        printf("Wrong. Try once more.\n");
        break;
    case 3:
        printf("Don't give up!\n");
        break;
    case 4:
        printf("No. Keep trying.\n");
        break;
    } 
}

void responseCorrect(void)
{
    int i = rand() % 4 + 1;
    switch (i)
    {
    case 1:
        printf("Very good!\n");
        break;
    case 2:
        printf("Excellent!\n");
        break;
    case 3:
        printf("Nice work!\n");
        break;
    case 4:
        printf("Keep up the good work!\n");
        break;
    } 
}