//rignt half pyramid
/*
* 
* * 
* * * 
* * * * 
* * * * *
*/
#include<stdio.h>
void main(){
    int row, colm;
    printf("Enter the row: ");
    scanf("%D", &row);
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}