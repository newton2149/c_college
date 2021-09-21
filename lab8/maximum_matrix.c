#include <stdio.h>
void main(){
    int a[50][50] ,  n , m;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&n,&m);
    for(int i =0 ; i<n ; i++){
        printf("Enter the data of %d row \n ",i+1);
        for(int j =0 ; j<m ; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    int maximum = a[0][0];
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j<m ; j++){
            if(maximum < a[i][j]){
                maximum = a[i][j];
            }
        }
    }
    printf("Maximum : %d ",maximum);
}