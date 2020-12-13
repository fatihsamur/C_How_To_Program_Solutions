#include<stdio.h> 

// Multiplication without using '*' operator;

int multiply(int x, int y); 
 
int main() 
{
    int x, y;
    printf("Enter two integer: ");
    scanf("%d%d", &x, &y); 
    printf("%d\n", multiply(x, y)); 
     
    return 0; 
}
/* function to multiply two numbers x and y*/
int multiply(int x, int y) 
{ 
   /* 0  multiplied with anything gives 0 */
   if(y == 0) 
     return 0; 
  
   /* Add x one by one */ 
   if(y > 0 ) 
     return (x + multiply(x, y-1)); 
   
  /* the case where y is negative */ 
   if(y < 0 ) 
     return -multiply(x, -y); 
} 
 