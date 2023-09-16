#include<stdio.h>
void main(){
    int a[3][2]={{56, 78},
    {23, 76},
    {98, 74}};

    printf("The matrix is: \n");

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}


