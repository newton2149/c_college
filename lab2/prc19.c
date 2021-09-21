#include <stdio.h>

int main(){
    int n , i , r;
    printf("Enter the number to get its multiplication table :");
    scanf("%d",&n);
    printf("Enter the number upto which you want the table to be printed :");
    scanf("%d",&r);
    for(i=1 ; i<=r ; i++){
        printf("%d X %d = %d\n" , n , i , n*i);       

    }
    return 0;
}