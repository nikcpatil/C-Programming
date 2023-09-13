#include<stdio.h>
#define size 20
void main(){
    int n, arr[size];
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the numbers of elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[0]>arr[i]){
            arr[0]= arr[i];
        }
    }
    printf("The smallest element is: %d", arr[0]);
}