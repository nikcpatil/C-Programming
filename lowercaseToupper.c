#include<stdio.h>
#include<string.h>
void main(){
    char s[10];
    printf("Enter the string: ");
    gets(s);

    printf("The string is: %s\n", s);

    for(int i=0; i<strlen(s); i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]= s[i]-32;
        }
    }
    printf("The uppercase string is: %s", s);
}