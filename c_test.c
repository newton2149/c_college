#include <stdio.h>

int frequency(int a[], int n)
{
    int *ptr;
    int cnt = 0;
    ptr = a;
    for (int i = 0; i < l; i++)
    {
        if (*(ptr + i) == a)
        {
            cnt++;
        }
    }
    return cnt;
}

void sortArray(int a[], int length)
{
    int *p = NULL, temp;
    p = &a[0];
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}
int search(int a[], int number, int n)
{
    int *p = NULL, temp;
    p = &a[0];
    int ans[50];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (number == a[i])
        {
            ans[j] = i;
            j += 1;
        }
    }
    return ans;
}

