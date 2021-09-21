#include <stdio.h>
#include <math.h>

int main(){
    double n , p , ans;
    printf("Enter the Number :  ");
    scanf("%lf",&n);
    printf("Enter the exponent : ");
    scanf("%lf",&p);
    ans=pow(n,p);

    printf(" %.4lf raised to  %.4lf is %.4lf .",n,p,ans);
    return 0;
}