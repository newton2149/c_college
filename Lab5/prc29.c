#include <stdio.h>

int prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if ((n % i) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n1, n2;
    printf("Enter the range x-y:  ");
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        if ((prime(i)) == 1 && i != 1)
        {
            printf("%d \t", i);
        }
    }
}