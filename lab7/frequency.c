#include <stdio.h>
#include <string.h>

void main(){
    char a;
    char str[700];
    int cnt=0;
    printf("Enter the string  :  ");
    gets(str);
    printf("Enter the character ");
    scanf("%c",&a);

    for(int i=0 ; str[i]!='\0' ; i++){
        if(str[i]==a){ cnt++ ;}

    }
    printf("The frequency of %c in %s is %d ",a,str,cnt);
}