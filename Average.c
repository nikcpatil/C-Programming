#include<stdio.h>
void main(){
    int arr[10]={1, 4, 5, 7, 8, 90, 56, 78, 32, 54};
    float average;
    average = (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]+arr[7]+arr[8]+arr[9])/10.0;

    printf("Average of 10 numbers is: %f", average);
}