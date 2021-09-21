#include <stdio.h>
#include <string.h>
void sortArray(char a[], int length)
{
    char *p = NULL, temp;
    p = &a[0];
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;            }
        }    }
}

void main()
{
    char a[50];
    int n = 0, y;
    printf("Enter the string : ");
    gets(a);
    n = strlen(a);
    sortArray(a, n);
    puts(a);
}