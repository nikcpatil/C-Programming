#include<stdio.h>
void main(){
    int row;
    printf("enter the number of rows: ");
    scanf("%d", &row);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}