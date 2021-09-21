#include <stdio.h>
#include <math.h>

double factorial(double n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    double res ;
    res = factorial(50)/pow(factorial(25),2);
    printf("%lf", res);
}