//WAP to find greatest number in an array.
#include<stdio.h>
#define size 10
void main(){
    int n, arr[size];
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<n; i++){
        if(arr[0]<arr[i]){
           arr[0] = arr[i];
        }
    }
    printf("Great value is: %d", arr[0]);
}
