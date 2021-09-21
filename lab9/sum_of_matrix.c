#include <stdio.h>

int sumMatrix(int a[50][50], int m, int n)
{
    int sum=0;
    int (*ptr)[50] = a;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           sum += *(*(ptr + i) + j);         
        }
    }
    return sum;
}
void main()
{
    int a[50][50], m, n, sum = 0, *p;
    printf("Enter the rows and columns of first matrix : ");
    scanf("%d %d", &m, &n);

    printf("Enter the data of first matrix  : \n ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    sum = sumMatrix(a,m,n);
    printf(" \n %d ",sum);    
}