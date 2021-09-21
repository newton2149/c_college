#include <stdio.h>

int main(){
    int n , c=0;
    printf("Enter the Number :  ");
    scanf("%d",&n);
    for(int i=n ; i>0 ; i=i/10){
        c+=1;
    }
    printf("The Number of Digits in %d is %d .",n,c);
}