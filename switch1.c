#include<stdio.h>
void main(){
    int a, x, square, cube, year;
    printf("Enter the choice: ");
    scanf("%d", &a);

    switch(a){

        case 1: printf("Enter the number: ");
        scanf("%d", &x);
        square = x*x;
        cube = square*x;
        printf("The square is %d and cube is %d ", square, cube);
        
        break;

        case 2: printf("Enter the year: ");
        scanf("%d", &year);
        if(year%4==0 || year%400 == 0){
            printf("The given year is leap year.");
        }
        else{
            printf("Not a leap year.");
        }
        break;

        default: printf("The number is Invalid.");

    }
}
