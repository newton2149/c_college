#include <stdio.h>
int main(){
    int i , j ,n ;

    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        
        for(int space=1 ; space<=i ; space++ ){
            printf(" ");
        }
        for(int star =1 ; star<=n-i ; star++){
            printf("* ");
        }
        
        printf("\n");
    }
    for(int i=1 ; i<=n ; i++){
        
        for(int space=1 ; space<=n-i ; space++ ){
            printf(" ");
        }
        for(int star =1 ; star<=i ; star++){
            printf("* ");
        }
        
        printf("\n");
    }

    
}
