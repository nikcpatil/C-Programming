#include<stdio.h>
#define MAX 10
void main(){

    int arr[MAX][MAX];
    int row, colm;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of column: ");
    scanf("%d", &colm);

    printf("Enter elements: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<colm; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The Matrix is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<colm; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}