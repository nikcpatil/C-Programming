#include<stdio.h>
void main(){
    int x, y, operator;
    printf("Enter the First number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter 1 for addition and 2 for subtraction: ");
    scanf("%d", &operator);

    switch(operator){

        case 1 : printf("Addition of two numbers is: %d", x+y);
        break;

        case 2 : printf("Subtraction of two number is: %d", x-y);
        break;

        default: printf("The operator is invalid.");

    }
}

