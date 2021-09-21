#include <stdio.h>
#include <string.h>

void main(){
    char a;
    char str[700] , str2[700];
    int cnt=0;
    int i;
    printf("Enter the string  :  ");
    gets(str);

    for(i=0 ; str[i]!='\0' ; i++){
        str2[i]=str[i];

    }
    str2[i]='\0';
    printf("The copied  string is %s ",str2);
}
