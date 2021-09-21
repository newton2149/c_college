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
int Lcm(int i , int j){return (i*j)/gcd(i,j);}
int main()
{
    int i , j;
    printf(" Enter the numbers : ");
    scanf("%d %d",&i,&j);
    printf("LCM of %d and %d is : %d ",i,j,Lcm(i,j));
    return 0;
}