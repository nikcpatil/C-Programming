/*
Inverted right half pyramid
* * * * * *
* * * * *
* * * *
* * *
* *
* 
*/
#include<stdio.h>
void main(){
    int row;
    printf("Enter the rows value: ");
    scanf("%d", &row);
    for(int i=1; i<=row; i++){
        for(int j=i; j<=row; j++){
            printf("* ");
        }
        printf("\n");
    }
}
