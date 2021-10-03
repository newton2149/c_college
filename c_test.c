// Aim: To multiply two matrices
// Algorithm
//  Read in the order of matrix A as M and N
//  Read the order of matrix B as N1 and L
//  If N1 = ! N, display multiplication is not possible
//  Display error message and prompt to enter the new size
//  Read in the elements of A matrix into an array
//  Read in the elements of B matrix into an array
//  Find C = A * B (Use proper loops)
//  Display the matrix C

#include<stdio.h>

int main()
{
    int M,N,N1,L,A[50][50],B[50][50],C[50][50];
    printf("Enter the dimension of matrix A(rows,columns) :");\
    scanf("%d,%d",&M,&N);

    printf("Enter the dimension of matrix B(rows,columns) :");\
    scanf("%d,%d",&N1,&L);
    
    if (N1 != N) 
    {
        printf("Dimentional error, matrices can not be multiplied!!\n");
        
    }
    else
    {
        // matrix A
        printf("Enter Matrix A\n");
        for (int i = 0;i < M;  i++)
        {
        for (int j = 0;j < N;j++)
            {
            printf("Enter the element in %d row %d column :",i+1,j+1);
            scanf("%d",&A[i][j]);
            }
        }
        // matrix B
        printf("Enter Matrix B\n");
        for (int i = 0;i < N1;  i++)
        {
        for (int j = 0;j < L;j++)
            {
            printf("Enter the element in %d row %d column :",i+1,j+1);
            scanf("%d",&B[i][j]);
            }
        }

        // multiplication
        for (int i=0; i<M;i++)
        {
            for(int j=0; j<N1; j++)
            {
                for(int k=0; k<N; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                // printf("%d\t",C[i][j]);2,2

                }   
                printf("%d ",C[i][j])   ;
                
                }
        }

        //printing result
        for(int i = 0;i < M;  i++)
        {
            for (int j = 0;j < L; j++)
            {
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        for(int i = 0;i < M;  i++)
        {
            for (int j = 0;j < L; j++)
            {
                printf("%d\t",B[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        for(int i = 0;i < M;  i++)
        {
            for (int j = 0;j < L; j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }



    }

    return 0;
}