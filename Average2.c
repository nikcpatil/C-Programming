#include<stdio.h>
#define size 10
void main(){

    float arr[size], sum=0, avg;
    printf("Enter the numbers in array: ");
    for(int i=0; i<size; i++){   
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }
     avg = sum/10.0;
     printf("Average is: %f", avg);
}