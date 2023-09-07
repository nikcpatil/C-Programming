#include<stdio.h>
void main(){
    int x=8, y=9;
    printf("%d\n", ((x>10)&&(y<10)));
    printf("%d\n", ((x>10)||(y<10)));
    printf("%d\n", ((x>10)&&(y>10)));
    printf("%d\n", !(x>10));
}