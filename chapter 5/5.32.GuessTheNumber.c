#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int number, guess;
    char playAgain = 'y';
    srand(time(NULL));
    number = rand() % 1000 + 1;
    while ((playAgain == 'y') || (playAgain == 'Y'))
    {
        printf("I have a number between 1 and 1000.(%d)\nCan you guess my number\nType your first guess: ", number);
        scanf("%d", &guess);
        while (guess != number)
        {
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
        printf("Congratulation! You guessed the number\nWould you like to play again(y or n)? ");
        scanf(" %c", &playAgain);
        printf("playAgain = %c\n", playAgain);
        // playAgain = getchar();
        if ((playAgain == 'y') || (playAgain == 'Y'))
        {
            number = rand() % 1000 + 1;
        }
    } 
    
    printf("See you soon!\n\n");

    return 0;    
}
