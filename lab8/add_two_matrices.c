// #include <stdio.h>
// void main(){
//     int a[50][50] , b[50][50] ,c[50][50],m ,n ,m1 ,n1,sum[50][50];
//     printf("Enter the rows and columns of first matrix : ");
//     scanf("%d %d", &m , &n);
//     printf("Enter the rows and columns of second matrix : ");
//     scanf("%d %d", &m1 ,&n1);
//     printf("Enter the data of first matrix  :\n ");
//     for(int i=0 ; i<m ; i++){
//           for (int j = 0; j < n; j++){scanf("%d", &a[i][j]);}       
//     }
//     printf("Enter the data of second matrix :\n ");
//     for(int i=0 ; i<m ; i++){
//         for (int j = 0; j < n; j++){scanf("%d", &b[i][j]);}        
//     }
//     for(int i=0 ; i<m ; i++){
//         for (int j = 0; j < n; j++){sum[i][j] = a[i][j] + b[i][j];}        
//     }
//     for(int i=0 ; i<m ; i++){
//         for (int j = 0; j < n; j++)
//         {printf("%d ",sum[i][j]);}
//         printf("\n");
//     }

// }

#include <stdio.h>
void main(){
    int a[50][50] , b[50][50] ,m ,n ,m1 ,n1,result[50][50];
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
        for (int j = 0; j < n; j++){result[i][j] = a[i][j] + b[i][j];}        
    }
    for(int i=0 ; i<m ; i++){
        for (int j = 0; j < n; j++)
        {printf("%d ",result[i][j]);}
        printf("\n");
    }

}