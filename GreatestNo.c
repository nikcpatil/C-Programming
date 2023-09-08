#include<stdio.h>
void main(){

    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);

    if((a>b)&&(a>c)){
        printf("%d is the largest number among three.", a);
    }
    else if((b>a)&&(b>c)){
        printf("%d is the largest number among three.", b);
    }
    else if((c>a)&&(c>b)){
        printf("%d is the largest number among three.",c);
    }
    else{
        printf("These numbers are equal");
    }
}
