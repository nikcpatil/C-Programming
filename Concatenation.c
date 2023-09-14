/*
#include<stdio.h>
void main(){
    char s1[20], s2[20], s3[40];
    printf("Enter the string s1: ");
    scanf("%s", &s1);
    printf("Enter the string s2: ");
    scanf("%s", &s2);
    //printf("The strings are %s%s", s1, s2);
    int i=0; int j=0;
    while(s1[i]!='\0'){
        s3[j]=s1[i];
        i++;
        j++;
    }
    //printf("S3 is: %s", s3[j]);
    i=0;
    while(s2[i]!='\0'){
        s3[j]=s2[i];
        i++;
        j++;
    }
    //s3[j]='\0';
    printf("The string s3 is: %s", s3[j]);
}
*/
#include <stdio.h>
int main() 
{
  char s1[20], s2[20];
    printf("Enter the string s1: ");
    scanf("%s", &s1);
    printf("Enter the string s2: ");
    scanf("%s", &s2);
  int length, j;
  
  // store length of s1 in the length variable
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  // termination
  s1[length] = '\0';

  printf("After concatenation: %s", s1);
 

  return 0;
}
