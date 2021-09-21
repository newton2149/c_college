#include <stdio.h>

 int main(){
    int i=1, s=0 , n;
    printf("Enter the Value of N :  ");
    scanf("%d",&n);
    do{
        s+=i;
        i+=1;

    }while(i<=n);

    printf("The sum is : %d",s);

    return 0;
}