#include<stdio.h>
void main(){
    float percent;
    printf("Enter the percentage: ");
    scanf("%f", &percent);

    if(percent>70){
        printf("A grade");
    }
    else if(percent>60 && percent<=70){
        printf("B+ grade");
    }
    else if(percent>45 && percent<=60){
        printf("B grade");
    }
    else if(percent>35 && percent<=45){
        printf("B grade");
    }
    else{
        printf("Fail");
    }

}
