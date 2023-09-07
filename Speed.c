#include<stdio.h>
void main(){
    float distance, time, speed;
    printf("Enter the value of the distance: ");
    scanf("%f", &distance);

    printf("Enter the value of time: ");
    scanf("%f", &time);

    speed = distance / time;
    printf("Speed is: %f", speed);
}
