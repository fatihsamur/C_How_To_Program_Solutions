#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int question(int);
void responseFalse(void);
void responseCorrect(void);
void exam(int);
int chooseDifLevel(void);

int main(void)
{
    int level;
    srand(time(NULL));
    level = chooseDifLevel();
    exam(level);
}

int question(int level)
{
    int answer, x, y, result;
    switch (level)
    {
        case 1:
            x = rand() % 10 + 1;
            y = rand() % 10 + 1;
            break;
        case 2:
            x = rand() % 10 + 1;
            y = rand() % 89 + 10;
            break;
        case 3:
            x = rand() % 89 + 10;
            y = rand() % 89 + 10;
            break;
    }
    result = x * y;
    printf("How much is %d times %d: %d  ", x, y, x * y);
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

void exam(int level)
{
    int counterCorrect = 0, test;
    for (int i = 0; i < 10; i++)
    {
        test = question(level);
        if (1 == test)
        {
            counterCorrect++;
        }
    }
    if (counterCorrect > 7)
    {
        printf("You answered correctly %d of 10 questions.\n", counterCorrect);
        if (3 == level)
        {
            printf("Congratulations, you passed the last level of multiplication course.\n");
        }
        else
        {
            printf("You are ready to go to the next level!\n");
            exam(level + 1);
        }
        
    }
    else
    {
        printf("You answered correctly %d of 10 questions.\n", counterCorrect);
        printf("Try this level again.\n");
        exam(level);
    }
}

int chooseDifLevel(void)
{
    int difficultyLevel;
    printf("Difficulty levels:\n");
    printf("Level-1: \"single digit * single digit\" questions\n");
    printf("Level-2: \"single digit * two digit\" questions\n");
    printf("Level-3: \"two digit * two digit\" questions\n");
    printf("Choose difficulty level: ");
    scanf("%d", &difficultyLevel);
    while (difficultyLevel < 1 || difficultyLevel > 3)
    {
        printf("Level couldn't find. Enter 1, 2 or 3: ");
        scanf("%d", &difficultyLevel);
    }
    
    return difficultyLevel;
}
// varying responses for incorrect answers
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
// varying responses for correct answers
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