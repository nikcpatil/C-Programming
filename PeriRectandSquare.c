#include<stdio.h>
void main(){
    float side, length, breadth, PerimeterOfSquare, PerimeterOfRect;
    printf("Enter the value of side of sqauare: ");
    scanf("%f", &side);

    printf("Enter the value of breadth of Rectangle: ");
    scanf("%f", &breadth);

    printf("Enter the value of length of Rectangle: ");
    scanf("%f", &length);

    PerimeterOfSquare= 4 * side;
    PerimeterOfRect= 2*(length+breadth);

    printf("Perimeter of Square: %f\n", PerimeterOfSquare);
    printf("Perimeter of SRectangle: %f\n", PerimeterOfRect);


}