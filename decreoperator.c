#include<stdio.h>
void main(){
    int a=9;
    int b=a;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    //postdecrement a--

    b = a--;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    

    //predecrement --a
    b = --a;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    

}