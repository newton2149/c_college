#include <stdio.h>

int main(){
    int h=0,min=0,hr_updation;
    printf("Enter Hour : Minute (GMT) : ");
    scanf("%d %d",&h , &min);
    h=(h+5)%24 + (min+30)/60;
    min=(min+30)%60;    
    printf("%d hrs : %d min ",h,min);
    
    return 0;
}