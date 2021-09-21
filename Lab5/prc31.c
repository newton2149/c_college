#include <stdio.h>
#include <math.h>
int number_of_digits(int n){
    int c=0;
    for(int i=n ; i>0 ; i=i/10){
        c+=1;
    }
    return c;
}
int isArmstrong(int n){
    int c=0,d;
    d=number_of_digits(n);
    for(int i=n ; i>0 ; i=i/10){
        c=c+ pow(i%10 ,d );
    }
    if(c==n){printf("%d \t",n);}
}
int main(){
    int n,j;
    printf("Enter the the range x-y :  ");
    scanf("%d %d", &n,&j);
    for(int i= n ; i<=j;i++){isArmstrong(i);}
    return 0;
}