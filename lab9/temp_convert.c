#include <stdio.h>

float CelsuistoFarenheit(float celcius){
    float *ptr;
    float farh;
    ptr = &celcius;
    farh = ((9/5)*(*ptr)  + 32);
    return farh;

}


void main(){
    float celsius;
    float farh;
    printf("Enter the tempreatur in celsius : ");
    scanf("%f",&celsius);
    farh = CelsuistoFarenheit(celsius);
    printf("%f degree celsius = %f degree farenheit",celsius,farh);
    

}