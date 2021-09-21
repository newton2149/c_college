#include <stdio.h>

int factorial(int n){
    if (n==0){return 1;}

    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n , s ;
    printf(" Enter the number of which factorial is to be calculated : ");
    scanf("%d",&n);
    s=factorial(n);
    printf("The factorial of %d is %d  ",n,s);

    return 0;
}