#include<stdio.h>
void main(){
    int a=9;
    int b=a;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    //postincrement a++

    b = a++;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    //preincrement ++a
    b = ++a;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

}