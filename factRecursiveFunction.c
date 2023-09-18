#include<stdio.h>
int fact(int);
void main(){
    int n, Result;
    printf("Enter the number:  ");
    scanf("%d", &n);
    Result = fact(n);
    printf("The factorial of %d is %d: ", n, Result);
}
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
