#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number :  ");
    scanf("%d", &n);
    for(int i=2 ; i<=n/2 ;i++){
        if((n%i)==0){
            printf("%d is not a prime number",n);
            return 0;

        }
    }
   printf("%d is a prime number",n);
}