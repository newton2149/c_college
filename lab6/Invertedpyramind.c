#include <stdio.h>


int main(){
    int i , j ,n ;

    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        
        for(int space=1 ; space<=i ; space++ ){
            printf(" ");
        }
        for(int digits =1 ; digits<=n-i ; digits++){
            printf("* ");
        }
        
        printf("\n");
    }
    
}
