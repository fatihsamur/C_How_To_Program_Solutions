#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int number, guess, numberOfGuess = 0;
    char playAgain = 'y';
    srand(time(NULL));
    number = rand() % 1000 + 1;
    while ((playAgain == 'y') || (playAgain == 'Y'))
    {
        printf("I have a number between 1 and 1000.(%d)\nCan you guess my number\nType your first guess: ", number);
        scanf("%d", &guess);
        numberOfGuess++;
        while (guess != number)
        {
            numberOfGuess++;
            if (guess > number)
            {
                printf("Too high! Try again.\n");
                scanf("%d", &guess);
            }
            else
            {
                printf("Too low! Try again.\n");
                scanf("%d", &guess);
            }
        }
        printf("Congratulation! You guessed the number\n");
        if (numberOfGuess < 10)
        {
            printf("Either you know the secret or you are lucky!\n");
        }
        else if (numberOfGuess == 10)
        {
            printf("Ahah! You know the secret!\n");
        }
        else
        {
            printf("You should be able to do better!\n");
        }
        printf("Would you like to play again(y or n)?");
        scanf(" %c", &playAgain);
        if ((playAgain == 'y') || (playAgain == 'Y'))
        {
            number = rand() % 1000 + 1;
        }
    } 
    
    return 0;    
}
