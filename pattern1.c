//rignt half pyramid
/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
#include<stdio.h>
void main(){
       int row, colm;
       printf("Enter the value of rows: ");
       scanf("%d", &row);
       printf("Enter the value of colum: ");
       scanf("%d", &colm);
       for(int i=1; i<=row; i++){
         for(int j=1; j<=colm; j++){
            printf("* ");
         }
         printf("\n");
       }
}
