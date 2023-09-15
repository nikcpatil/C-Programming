#include<stdio.h>
void main(){
    int i=1,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(i<=n){
        printf("%d\n", i);
        i++;
        if(i==3){
            i++;
            continue;
        }
    }
}
