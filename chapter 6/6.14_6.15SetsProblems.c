/* 
C. 6.14- 6.15
sets of integers and their unions and intersections, there are
security issues about the scanf function usage
*/
#include<stdio.h>

void readArray(int array[], int size);
void printArray(int array[], int size);
void printDifference(int array1[], int size1, int array2[], int size2);
void printIntersection(int set1[], int size1, int set2[], int size2);
void printUnion(int set1[], int size1, int set2[], int size2);

int main(void)
{
     int sizeA, sizeB;
     // get size of the set A and elements of the set A from user
     printf("Enter size of set A: ");
     scanf("%d", &sizeA);
     int setA[sizeA];
     readArray(setA, sizeA);
     // get size of the set B and elements of the set B from user
     printf("Enter size of set B: ");
     scanf("%d", &sizeB);
     int setB[sizeB];
     readArray(setB, sizeB);
     // print out the elements of set A and B to control
     puts("set A:");
     printArray(setA, sizeA);
     puts("set B:");
     printArray(setB, sizeB);
     // print out the difference set of set A from B
     puts("set A / B:");
     printDifference(setA, sizeA, setB, sizeB);
     // print out the difference set of set B from A
     puts("\nset B / A:");
     printDifference(setB, sizeB, setA, sizeA);
     // print out the intersection set of set A and B
     puts("\nset A intersect B:");
     printIntersection(setA, sizeA, setB, sizeB);
     // print out the union set of set A and B
     puts("\nset A U B:");
     printUnion(setA, sizeA, setB, sizeB);
     puts("");

     return 0;
}

// take elements of array of integers
void readArray(int array[], int size)
{
     printf("Enter %d integer: ", size);
     for (int i = 0; i < size; i++)
     {
          scanf("%d", &array[i]);
     }
}

// print out an array of integers
void printArray(int array[], int size)
{
     for (int i = 0; i < size; i++)
     {
          printf("%d  ", array[i]);
     }
     puts("");
}

// print out the different elements of one set from another
void printDifference(int array1[], int size1, int array2[], int size2)
{
     int counter;
     for (int i = 0; i < size1; i++)
     {
          counter = 0;
          for (int j = 0; j < size2; j++)
          {
               if (array1[i] != array2[j])
               {
                    counter++;
               }
          }
          if (size2 == counter)
          {
               printf("%d  ", array1[i]);
          }
     }
}

// print out the common elements of two  sets
void printIntersection(int set1[], int size1, int set2[], int size2)
{
     for (int i = 0; i < size1; i++)
     {
          for (int j = 0; j < size2; j++)
          {
               if (set1[i] == set2[j])
               {
                    printf("%d  ", set1[i]);
               }
               
          }
     }
}

// print out the union of two array without repeating common elements
void printUnion(int set1[], int size1, int set2[], int size2)
{
     printDifference(set1, size1, set2, size2);
     printIntersection(set1, size1, set2, size2);
     printDifference(set2, size2, set1, size1);

}