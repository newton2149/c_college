#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i ; j++){
            printf("%d ",n-i);
        }
        for (int space=0 ; space<i;space++){
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}