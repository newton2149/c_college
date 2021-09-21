#include <stdio.h>
#include<math.h>
int factorial(int n){
    if (n==0){
        return 1;
    }
    else{
    return n*factorial(n-1);}
}

int main(){
    int n ,i;
    float x , sum=0;
    printf("Enter the number of digits : ");
    scanf("%d",&n);
    printf("\nEnter the value for which sin has to be calculated :" );
    scanf("%f",&x);
    for(i=0 ; i<n ; i++){
        sum+=pow(-1,i)*(pow(x,2*i+1)/factorial(2*i + 1));
    }
    printf("sin(%.1f) is %f",x,sum);
    return 0;
}