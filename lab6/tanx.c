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
    float x , sumsin=0 , sumcos=0;
    printf("Enter the number of digits : ");
    scanf("%d",&n);
    printf("\nEnter the value for which tan has to be calculated :" );
    scanf("%f",&x);
    for(i=0 ; i<n ; i++){
        sumsin+=pow(-1,i)*(pow(x,2*i+1)/factorial(2*i + 1));
        sumcos+=pow(-1,i)*(pow(x,2*i)/factorial(2*i));
    }
    printf("tan(%.1f) is %f",x,sumsin/sumcos);
    return 0;
}