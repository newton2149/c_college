#include <stdio.h>
int fibonnaci(int n){
    if (n<=1){ return n;}
    else{return fibonnaci(n-1) + fibonnaci(n-2);}
}
int main(){

    int n ;
    printf("Enter the number upto which fibonaci serires to calculated : ");
    scanf("%d",&n);
    printf("Using Recursion \n");
    for (int i=0 ; i<n ; i++){
        printf("%d\n",fibonnaci(i));

    }
    printf("Without using recursion \n");
    
    int a =0 , b=1 , s=0;
    int i=1;
    if (n==2){
        printf("%d \n %d ",0,1);
        return 0;
    }
    else if(n==1){
        printf("%d " , 0);
        return 0;
    }
    s=a+b;
    printf("%d \n %d \n",0,1);
    while(i<=n-2){
        printf("%d \n ",s);
        a=b;
        b=s;
        s = a+ b;
        i++;
    }
    return 0;}
