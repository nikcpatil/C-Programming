#include<stdio.h>
#include<string.h>
void main(){
    char s[50];
    int i;
    printf("Enter the string: ");
    gets(s);
    printf("string s is: %s\n", s);
    for(i=0; i<strlen(s); i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]= s[i]+32;
        }
    } 
    printf("String in Lowercase: %s\n", s);
}
