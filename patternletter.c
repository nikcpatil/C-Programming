#include<stdio.h>
void main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for(int i=0; i<row; i++){
        for(int j=0; j<=i; j++){
            printf("%c ", 'A'+j);
        }
        printf("\n");
    }
}