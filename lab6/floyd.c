#include <stdio.h>


int main(){
    int i , j ,n , a=1 ;

    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int digits =1 ; digits<=i ; digits++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    
}

