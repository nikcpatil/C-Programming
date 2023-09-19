#include<stdio.h>
void main(){
    int a;
    char b;
    double c;
    int *ptr1 = &a;
    char *ptr2 = &b;
    double *ptr3 = &c;
    printf("Address of a is: %d\n", &a);
    printf("ptr1 id initialized by value: %d\n", ptr1);
    printf("Address of ptr1 is: %d\n",&ptr1);

    printf("Address of b is: %d\n", &b);
    printf("ptr2 id initialized by value: %d\n", ptr2);
    printf("Address of ptr2 is: %d\n",&ptr2);

    printf("Address of c is: %d\n", &c);
    printf("ptr3 id initialized by value: %d\n", ptr3);
    printf("Address of ptr3 is: %d\n",&ptr3);
}
