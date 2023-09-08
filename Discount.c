#include<stdio.h>
void main(){
    int costPrice;
    printf("Enter the cost price: ");
    scanf("%d", &costPrice);
     
    int a;
    printf("If you are student enter 1 otherwise enter 0: ");
    scanf("%d", &a);

    if(a==1){
        if(costPrice > 500){
        printf("Your discount is 10%");
        }
        else{
            printf("Your discount is 5%");
        }
    }
    else{
        if(costPrice > 500){
            printf("Your discount is 8%");
        }
        else{
            printf("Your discount is 2%");
        }
    }
}
