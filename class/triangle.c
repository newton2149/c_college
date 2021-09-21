#include <stdio.h>

int trinagle(int n){
    for(int i=1 ; i<=n ; i++){
        for(int space=1 ; space<=n-i ; space++ ){
            printf(" ");
        }
        for(int star =1 ; star<=i ; star++){
            printf("%d ",star);
        }
        printf("\n");
    }

}

int main(){
    int i , j ,n ;

    scanf("%d",&n);
    trinagle(n);
    
}