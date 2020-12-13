#include<stdio.h>

void printMatrix(int row, int col, int matrix[row][col]);
void readMatrix( int row, int col, int matrix[row][col]);
void multiplicateMatrices(int row1, int col1, int col2, int matrix1[row1][col1], int matrix2[col1][col2], int product[row1][col2]);

int main(void)
{
     int row1, col1, row2, col2;
     printf("Enter sizes of matrix1 (row * column): ");
     scanf("%d %d", &row1, &col1);
     printf("Enter column number of matrix2: ");
     scanf("%d", &col2);
     row2 = col1;
     
     int matrix1[row1][col1];
     int matrix2[row2][col2];
     int multipMatrix[row1][col2];
     for (int i = 0; i < row1; i++)
     {
          for (int j = 0; j < col2; j++)
          {
               multipMatrix[i][j] = 0;
          }
     }
     
     readMatrix(row1, col1, matrix1);
     readMatrix(row2, col2, matrix2);

     multiplicateMatrices(row1, col1, col2, matrix1, matrix2, multipMatrix);
     printMatrix(row1, col1, matrix1);
     printMatrix(row2, col2, matrix2);
     printMatrix(row1, col2, multipMatrix);
     
     
     

}

void readMatrix( int row, int col, int matrix[row][col])
{
     for (int i = 0; i < row; i++)
     {
          printf("Enter %d integer of %d. row: ", col, i + 1);
          for (int j = 0; j < col; j++)
          {
               scanf("%d", &matrix[i][j]);
          }
     }
}

void printMatrix(int row, int col, int matrix[row][col])
{
     printf("\n%-6s", "M");
     for (int i = 1; i <= col; i++)
     {
          printf("C%-6d", i);
     }
     puts("");
     for (int i = 0; i < row; i++)
     {
          printf("R%-4d|", i + 1);
          for (int j = 0; j < col - 1; j++)
          {
               printf("%-7d", matrix[i][j]);
          }
          printf("%-4d|", matrix[i][col - 1]);
          puts("");
     }
     puts("");
}

void multiplicateMatrices(int row1, int col1, int col2, int matrix1[row1][col1], int matrix2[col1][col2], int product[row1][col2])
{
     for (int i = 0; i < row1; i++)
     {
          for (int j = 0; j < col2; j++)
          {
               for (int k = 0; k < col1; k++)
               {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
               }
          }
     }
}