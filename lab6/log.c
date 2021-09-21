#include <stdio.h>
#include<math.h>

int main(){
    int n ,i;
    float x , sum=0;
    printf("Enter the number of digits : ");
    scanf("%d",&n);
    printf("\nEnter the value for which ln(1+x) has to be calculated :" );
    scanf("%f",&x);
    for(i=1 ; i<=n ; i++){
       sum+=(pow(-1,i+1)*pow(x,i)/i);
    }
    printf("log(1 + %.1f) is %f",x,sum);
    return 0;
}