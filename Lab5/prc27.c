#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("Enter the Number :  ");
    scanf("%d", &n);
    for (int i = n; i > 0; i = i / 10)
    {
        c = c * 10 + i % 10;
    }
    if (c == n)
    {
        printf("The Number %d is a palindrome", n);
    }
    else
    {
        printf("The Number %d is not a palindrome", n);
    }
}