#include<stdio.h>
void main(){
    int n, rem, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while(n>0){

        rem = n%10;
        n = n/10;
        if(rem%2==0){
            sum= sum+ rem;
        }
    }
    printf("%d", sum);
}