#include <stdio.h>
void main(){
    int a[50][50] , b[50][50] , n , m;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&n,&m);
    for(int i =0 ; i<n ; i++){
        printf("Enter the data of %d row \n ",i+1);
        for(int j =0 ; j<m ; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for(int i =0 ; i<n ; i++){        
        for(int j =0 ; j<m ; j++){
            b[j][i] = a[i][j];
        }
    }
    for(int i =0 ; i<n ; i++){      
        for(int j =0 ; j<n ; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");

    }

}