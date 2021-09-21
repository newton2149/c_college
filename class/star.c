#include <stdio.h>

int star(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    for(int i=1 ; i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
    }

}

int numbers(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    for(int i=1 ; i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }

}
int pattern2(){
    
    
}

int main(){
    star();
    numbers();
    pattern2();
    return 0;
    
}