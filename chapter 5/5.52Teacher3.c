#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int question(void);
void responseFalse(void);
void responseCorrect(void);
void exam(void);

int main(void)
{
    srand(time(NULL));
    char next;
    exam();
    printf("\nPress any key to take another exam or press 'q' for quit: ");
    scanf(" %c", &next);
    if ('q' == next || 'Q' == next)
    {
        return 0;
    }
    else
    {
        main();
    }
}
int question(void)
{
    int answer, x, y, result;
    x = rand() % 10 + 1;
    y = rand() % 10 + 1;
    result = x * y;
    printf("How much is %d times %d: ", x, y);
    scanf("%d", &answer);
    if (answer == result)
    {
        responseCorrect();
        return 1;
    }
    else
    {
        while (answer != result)
        {
            responseFalse();
            scanf("%d", &answer);
        }
        responseCorrect();
        return 0;
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

void exam(void)
{
    int counterCorrect = 0, test;
    for (int i = 0; i < 10; i++)
    {
        test = question();
        if (1 == test)
        {
            counterCorrect++;
        }
    }
    if (counterCorrect > 7)
    {
        printf("You answered correctly %d of 10 questions.\n", counterCorrect);
        printf("Congratulations, you are ready to go to the next level!\n");
    }
    else
    {
        printf("You answered correctly %d of 10 questions.\n", counterCorrect);
        printf("Please ask your teacher for extra help.\n");
    }
    
}