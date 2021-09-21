#include <stdio.h>
int main(){
    int i , j ,n ;
    char ch='A';

    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        
        for(int space=1 ; space<=n-i ; space++ ){
            printf(" ");
        }
        for(int star =1 ; star<=i ; star++){
            printf("%c ",ch);
            ch++;
        }
        
        printf("\n");
    }    
}