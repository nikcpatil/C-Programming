#include<stdio.h>
void main(){
    int n, rem;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if(n==1){
        printf("1 is not prime nor composite number.");return;
    }

    for(int i=2; i<n; i++){
        if(n%i==0){
            printf("The number is not prime."); return;
        }
    } 
    printf("The number is prime.");
}

