#include<stdio.h>
void main(){
    int n, fact=1;
    printf("enter the number n: ");
    scanf("%d", &n);
    if(n>=0){
    for(int i=2; i<=n; i++){
        fact= fact*i;
    }
    printf("factorial of a number is: %d", fact);
    }
    else{
        printf("Invalid number: %d", n);
    }
}
