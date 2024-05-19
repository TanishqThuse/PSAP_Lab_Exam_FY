/*E34 
1. Write a C program to print a given string in upper case using 
C*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[100];
    printf("Enter string\n");
    fgets(s, sizeof(s), stdin);
    for(int i=0; i<=100; i++){
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
    }

    // s = s.toupper();
    for(int i=0; s[i]!='\0';i++){
        s[i] = toupper(s[i]);
    }
    printf("Output: %s\n", s);

}