#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 15

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
          array[i] = rand() % 90 + 10;
     }
}

// Selection sort array
void selectionSort(int array[])
{
     int i, j, min, temp, swap;
     for (i = 0; i < SIZE; i++)
     {
          // initialize min value as 100, if smaller value come that will become min
          min = 100;
          for (j = i; j < SIZE; j++)
          {
               if (array[j] < min)
               {
                    min = array[j];
                    swap = j;
               }
          }
          temp = array[i];
          array[i] = min;
          array[swap] = temp;
     }
}