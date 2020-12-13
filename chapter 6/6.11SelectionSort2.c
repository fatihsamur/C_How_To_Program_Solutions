#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 6

void printArray(const int[]);
void randomArray(int array[]);
void selectionSort(int array[]);

int main(void)
{
     srand(time(NULL));
     int grades[SIZE];
     randomArray(grades);
     puts("Randomly generated new array: ");
     printArray(grades);
     selectionSort(grades);
     puts("sorted array:");
     printArray(grades);

     return 0;
}

// print out array's elements
void printArray(const int array[])
{
     for (size_t i = 0; i < SIZE; i++)
     {
          printf("%-4d", array[i]);
     }
     puts("");
}

// generate elements of array randomly
void randomArray(int array[])
{
     for (size_t i = 0; i < SIZE; i++)
     {
          array[i] = rand() % 20 + 1;
     }
}

// Selection sort array
void selectionSort(int array[])
{
     int i, j, temp, min_index;
     for (i = 0; i < SIZE - 1; i++)
     {
          min_index = i;
          for (j = i + 1; j < SIZE; j++)
          {
               if (array[j] < array[min_index])
               {
                    min_index = j;
               }
          }
          temp = array[i];
          array[i] = array[min_index];
          array[min_index] = temp;
     }
}