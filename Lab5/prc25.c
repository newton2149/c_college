#include <stdio.h>

int main(){
    int n , c=0;
    printf("Enter the Number :  ");
    scanf("%d",&n);
    for(int i=n ; i>0 ; i=i/10){
        c=c*10 + i%10;
    }
    printf("The reverse of %d is %d .",n,c);
}