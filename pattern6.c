/*
* * * *
  * * *
    * *
      * 
*/
#include<stdio.h>
void main(){
    int row;
    printf("enter the number of rows: ");
    scanf("%d", &row);
    for(int i=1; i<=row; i++){
        for(int k=1; k<=i; k++){
            printf("  ");
        }
        for(int j=i; j<=(row); j++){
            printf("* ");
        }
    printf("\n");
    }

}