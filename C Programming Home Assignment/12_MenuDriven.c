// HARSSHIT YADAV
// 2105891
//  Write a menu driven program for the following matrix operations:-

// a. Multiplication of two matrix
// b. Sum of the upper triangular matrix
// c. The sum of each row and column of a matrix.
// d. Check the sparse matrix
// e. Interchange diagonals of a matrix.

#include <stdio.h>
#include <stdlib.h>

void Multiplication()
{
    int a[10][10], b[10][10], mul[10][10], row, col, i, j, k;
    printf("enter the number of row=");
    scanf("%d", &row);
    printf("enter the number of column=");
    scanf("%d", &col);
    printf("enter the first matrix element=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // printf("multiply of the matrix=\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // for printing result
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}

//  2nd choice - for printing the sum of upper triangular matrix
void SumUpperTriangularMatrix(){
    int i, j, a[10][10], sum, rows, columns;
 
   printf("\nEnter the number of Rows : ");
   scanf("%d", &rows);
 
   printf("\nEnter the number of Columns : ");
   scanf("%d", &columns);
 
   //Accept the Elements in Matrix
   for (i = 0; i < rows; i++)
      for (j = 0; j < columns; j++) {
         printf("\nEnter the Element a[%d][%d] : ", i, j);
         scanf("%d", &a[i][j]);
      }
 
   //Addition of all Diagonal Elements
   sum = 0;
   for (i = 0; i < rows; i++)
      for (j = 0; j < columns; j++) {
         // Condition for Upper Triangle
         if (i < j) {
            sum = sum + a[i][j];
         }
      }
 
   //Print out the Result
   printf("\nSum of Upper Triangle Elements : %d", sum);
}

// 3rd choice - The sum of each row and column of a matrix.
void sumRowSumColumn(){
      static int array[10][10];
        int i, j, m, n, sum = 0;
 
        printf("Enter the order of the matrix\n");
        scanf("%d %d", &m, &n);
 
        printf("Enter the co-efficients of the matrix\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j) 
            {
                scanf("%d", &array[i][j]);
            }
        }
 
        for (i = 0; i < m; ++i) 
        {
            for (j = 0; j < n; ++j) 
            {
                sum = sum + array[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
        sum = 0;
        for (j = 0; j < n; ++j) 
        {
            for (i = 0; i < m; ++i)
            {
                sum = sum + array[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
 
        }
}


// 4th choice

void checkSparseMatrix(){
      int row,col,i,j,a[10][10],count = 0;
   printf("Enter row\n");
   scanf("%d",&row);
   printf("Enter Column\n");
   scanf("%d",&col);
   printf("Enter Element of Matrix1\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   /*checking sparse of matrix*/
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((row * col)/2))
      printf("Matrix is a sparse matrix \n");
   else
      printf("Matrix is not sparse matrix\n");
}


// 5th choice
void InterchangeDiagonals(){
      static int array[10][10];
        int i, j, m, n, a;
 
        printf("Enter the order of the matix \n");
        scanf("%d %d", &m, &n);
 
        if (m == n)
        {
            printf("Enter the co-efficients of the matrix\n");
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j) 
                {
                    scanf("%dx%d", &array[i][j]);
                }
            }
 
            printf("The given matrix is \n");
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j) 
                {
                    printf(" %d", array[i][j]);
                }
                printf("\n");
            }
 
            for (i = 0; i < m; ++i) 
            {
                a = array[i][i];
                array[i][i] = array[i][m - i - 1];
                array[i][m - i - 1] = a;
            }
 
            printf("The matrix after changing the \n");
            printf("main diagonal & secondary diagonal\n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j) 
                {
                    printf(" %d", array[i][j]);
 
                }
 
                printf("\n");
 
            }
 
        }
 
        else
            printf("The given order is not square matrix\n");
}

int main()
{
    int choice;
    printf("Enter your choice : \n 1. Multiplication of two matrix \n 2. Sum of the upper triangular matrix \n 3.The sum of each row and column of a matrix. \n 4.Check the sparse matrix \n 5.Interchange diagonals of a matrix. \n ");

    scanf("%d", &choice);
    if (choice == 1)
    {
        Multiplication();
    }
    else if(choice == 2)
    {
        SumUpperTriangularMatrix();
    }
    else if(choice == 3)
    {
        sumRowSumColumn();
    }
    else if(choice == 4)
    {
        checkSparseMatrix();
    }
    else if(choice == 5)
    {
        InterchangeDiagonals();
    }
    else{
        printf("Wrong  choice");
    }   
    return 0;
}
