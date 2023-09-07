#include<stdio.h>
void main(){
    float principal, rate, time;
    float SI;
    printf("Enter the value of principal: ");
    scanf("%f", &principal);

    printf("Enter the value of rate: ");
    scanf("%f", &rate);

    printf("Enter the value of time: ");
    scanf("%f", &time);

    SI= (principal * rate * time)/100;

    printf("Simple interest is: %f", SI);

}