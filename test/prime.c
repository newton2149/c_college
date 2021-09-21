#include <stdio.h>

int main(){
    int i=2 , n;
    scanf("%d",&n);
    while (i<=n/2){
        if (n%i ==0) {

            printf("print it is not a prime number ");
            return 0;

        }

    
        i++;
    }
    printf("it is a prime number");
    return 0;

}