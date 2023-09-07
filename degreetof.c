#include<stdio.h>
void main(){
    float F, Celsius;
    printf("Enter the Farenheit value: ");
    scanf("%f", &F);

    Celsius = ((F -32)*5)/9;

    printf("Drgree Celsius value is: %f", Celsius);
}