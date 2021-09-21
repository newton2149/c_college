#include <stdio.h>
#include <string.h>

void main(){
    char a;
    char str[700] , *ptr;
    int cnt=0;
    
    printf("Enter the string  :  ");
    gets(str);
    int l = strlen(str);
    ptr=str;
    printf("Enter the character ");
    scanf("%c",&a);

    for(int i=0 ; i<l ; i++){
        if(*(ptr+i)==a){ cnt++ ;}

    }
    printf("The frequency of %c in %s is %d ",a,str,cnt);
}