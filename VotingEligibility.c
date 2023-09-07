#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Your are eligible for voting.");
    }
    else{
        printf("Your age is less than 18, wait for it.");
    }
    
}

