#include <stdio.h>
#include <math.h>

// Multiplication without using '*' operator;

unsigned int mystery(int, int); // function prototype
 
int main(void)
{
   printf("%s", "Enter two positive integers: ");
   int x; // first integer
   int y; // second integer
   scanf("%d%d", &x, &y);

   printf("The result is %d\n", mystery(x, y));
} 

unsigned int mystery(int a, int b)
{
    int absolute_b = fabs(b);                                              
   // base case
   if (1 == absolute_b) {
      return -a;
   } 
   else { // recursive step
      return -a + mystery(a, absolute_b - 1);
   } 
} 
