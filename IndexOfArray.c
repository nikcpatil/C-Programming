//A program to search particular value in an array and return the index number where it is located.
#include<stdio.h>
#define SIZE 10
void main(){
    int arr[SIZE];
    int n, x;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter the elements in array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        if(x==arr[i]){
          printf("The index of element is %d", i);return;
    }
    }
    printf("%d is not in array.", x);
}