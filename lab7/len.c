#include <stdio.h>
#include <string.h>

void main(){
    char a;
    char str[700];
    int cnt=0;
    printf("Enter the string  :  ");
    gets(str);
    for(int i=0 ; str[i]!='\0' ; i++){
        cnt++;
    }
    printf("len is %d ",cnt);
}