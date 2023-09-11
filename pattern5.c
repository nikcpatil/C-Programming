/*
Hollow Rectangle
* * * * * 
*       *
*       *
* * * * *
*/
#include<stdio.h>
void main(){
    int row, colm;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("enter the number of column: ");
    scanf("%d", &colm);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=colm; j++){
            if(i==1 || i==row || j==1 || j==colm){
             printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
} 
