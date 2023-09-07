#include<stdio.h>
void main(){
    int S1, S2, S3, S4, S5, Avg;
    printf("Enter the marks of First subject: ");
    scanf("%d", &S1);
    printf("Enter the marks of Second subject: ");
    scanf("%d", &S2);
    printf("Enter the marks of Third subject: ");
    scanf("%d", &S3);
    printf("Enter the marks of Fourth subject: ");
    scanf("%d", &S4);
    printf("Enter the marks of Fifth subject: ");
    scanf("%d", &S5);

    Avg = (S1+S2+S3+S4+S5)/5;
    printf("The average of five subject's mark is: %d", Avg);
}