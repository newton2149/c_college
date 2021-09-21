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
    printf("\nEnter the value for which for x for which e^x has to be calculated :" );
    scanf("%f",&x);
    for(i=0 ; i<n ; i++){
       sum+=(pow(x,i)/factorial(i));
    }
    printf("e^(%f) is %f",x,sum);
    return 0;
}