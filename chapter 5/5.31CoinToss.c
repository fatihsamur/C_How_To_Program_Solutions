#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip(void);

int main(void)
{
    int coin, HeadsCounter = 0, TailsCounter = 0;
    srand(time(NULL));
    for (int i = 0; i < 1000; i++)
    {
        coin = flip();
        printf("%d ", coin);
        switch(coin)
        {
            case 0:
            printf("Tails\n");
            TailsCounter++;
            break;
            case 1:
            printf("Heads\n");
            HeadsCounter++;
            break;
        }
    }
    printf("\nHeads: %d\nTails: %d\n", HeadsCounter, TailsCounter);

    return 0;    
}

int flip(void)
{
    return (rand() % 2);
}