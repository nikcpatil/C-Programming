#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        
        for (int j = 1; j <=n; j++)
        {
            if(j==1){
            if(i==3){
             printf("%d", ++i);
             continue;
         }else{
            printf("%d",i);
         }
            }else if(j==n){
                if(i==3){
             continue;
         }else{
            printf("%d",j+1-i);
         }
            }else{
                printf(" ");
            }
        }
        printf("\n"); 
    }
}