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
    if(c==n){printf("%d is an  Armstrong number",n);}
    else{printf("%d is not an Armstrong number",n);}

}

int main(){
    int n;
    printf("Enter the Number :  ");
    scanf("%d", &n);
    isArmstrong(n);
    return 0;
}