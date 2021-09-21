#include <stdio.h>

int main(){
    int n , s;
    printf(" Enter the number upto which sum has to be calculated : ");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf("The sum %d natural numbers is %d  ",n,s);

    return 0;
}