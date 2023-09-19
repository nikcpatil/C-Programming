//Demonstrate addition of two floating type numbers by using call by address.
#include<stdio.h>
float sum(float *, float *);
void main(){
    float a, b, Result;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    Result = sum(&a, &b) ;
    printf("The sum of two numbers is: %f", Result);

}
float sum(float *a, float *b){
    float Result;
    Result = *a + *b;
    return Result;
}
