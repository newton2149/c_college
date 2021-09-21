#include <stdio.h>
void sortArray(int a[], int length)
{
    int *p = NULL, temp;
    p = &a[0];
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }        }    }   
}
void main()
{    int a[50], n = 0, y;

    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Enter the array : \n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y);
        a[i] = y;
    }
    sortArray(a,n);
 for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}