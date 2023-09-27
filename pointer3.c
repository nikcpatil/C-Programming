#include<stdio.h>
/*Demonstrate pointer arithmetic by assigning pointer “ptr” to variable “a” which is having 
value as 100 in it.Perform increment operation on pointer ptr like ptr=ptr+2 and display 
which address that pointer ptr hold.
*/
void main(){
    int a=100;
    int *ptr = &a;
    printf("The address of a is: %d\n", ptr);
    ptr = ptr+2;
    printf("Address that new pointer hold: %d ", ptr);
}