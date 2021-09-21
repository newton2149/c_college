#include <stdio.h>

int gcd(int i ,int j){
    if(i==0){return j;}
    else if(j==0){return i;}

    if (i==j){
        return j;
    }

    if (i > j){
        return gcd(i-j,j);
    }
    return gcd(i,j-1);
}
int main(){
    int a , b;
    printf("Enter the numbers to find : ");
    scanf("%d %d",&a,&b);
    printf("GCD or HCF of %d and %d is : %d",a,b,gcd(a,b));
    return 0;
}