#include <stdio.h>
void main(){
    int a[50][50] , b[50][50] ,m ,n ,m1 ,n1,c[50][50];
    printf("Enter the rows and columns of first matrix : ");
    scanf("%d %d", &m , &n);
    printf("Enter the rows and columns of second matrix : ");
    scanf("%d %d", &m1 ,&n1);
    printf("Enter the data of first matrix  :\n ");
    for(int i=0 ; i<m ; i++){
          for (int j = 0; j < n; j++){scanf("%d", &a[i][j]);}       
    }
    printf("Enter the data of second matrix :\n ");
    for(int i=0 ; i<m ; i++){
        for (int j = 0; j < n; j++){scanf("%d", &b[i][j]);}        
    }
    for(int i=0 ; i<m ; i++){
        for (int j = 0; j < n1; j++){c[i][j] = 0;}        
    }
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n1; ++j) {
         for (int k = 0; k < n; ++k) {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }
    for(int i=0 ; i<m ; i++){
        for (int j = 0; j < n; j++)
        {printf("%d ",c[i][j]);}
        printf("\n");
    }

}