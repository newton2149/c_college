#include <stdio.h>
int main() {
   int r,  space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i = 0; i < r; i++) {
        for (space = 1; space <= r - i; space++)
            printf("  ");

        int c =1;
        int num=i;
        int den=1;

        for(int j=0 ; j<=i;j++){
            printf("%4d",c);
            c=(c*num)/den;
            num--;
            den++;
        }
    printf("\n"); 
    }
   return 0;
}
