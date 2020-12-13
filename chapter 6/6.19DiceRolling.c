#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define NUMBER 36000

int sum(void);
void drawFrequncyChart(int diceArray[], int size);
void printArray(int array[], int size);

int main(void)
{
     srand(time(NULL));
     int totals[NUMBER];
     for (int i = 0; i < NUMBER; i++)
     {
          totals[i] = sum();
     }
     // printArray(totals, NUMBER);

     drawFrequncyChart(totals, NUMBER);

}

int sum(void)
{
     int dice1, dice2;
     dice1 = rand() % 6 + 1;
     dice2 = rand() % 6 + 1;
     return dice1 + dice2;
}

void drawFrequncyChart(int diceArray[], int size)
{
     int i;
     int sums[11] = {0};
     for (i = 0; i < size; i++)
     {
          sums[diceArray[i] - 2]++;
     }
     printf("%s  %s  %s  %s\n", "Sum", "Frequency", "Percent", "Histogram");
     for (i = 2; i <= 12; i++)
     {
          double percent = ((double) sums[i - 2] / NUMBER) * 100; 
          int roundPercent = ceil(percent - 0.5);
          printf("%-2d:   %-9d %%%5.2f:   ", i, sums[i - 2], percent);
          for (int j = 0; j < roundPercent; j++)
          {
               printf("*");
          }
          puts("");
     }
}

void printArray(int array[], int size)
{
     for (int i = 0; i < size; i++)
     {
          printf("%d ", array[i]);
     }
     puts("");
}