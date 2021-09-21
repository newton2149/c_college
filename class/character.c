#include <stdio.h>
#include<string.h>

int main()
{
    char a[50];
    int n;
    int i;
    printf("Enter your name");
    gets(a);
    for(i =0 ; a[i]!='\0' ; i++);
    printf("%d",strlen(a));
    printf("Welcome %s",a);
    return 0;
}