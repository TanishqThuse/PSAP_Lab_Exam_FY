/*E34_q2
Write a C program to Reverse a string using pointers */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void ReverseString(char *s, int l){
    //i assume *s to be start

    char* start = s;
    char* end = s + l-1;

    // for(int i=0; *s != '\0'; i++);
    // char* end = s;

    char temp ; 

    for(int i=0; start<end; i++){
        // if(start>end){
        //     continue;
        // }
        // if(start == end){
        //     break;
        // }
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void printString(char s[]){
    printf("%s",s);
}

int main(){
    char s[100], rev[100];
    printf("Enter a string\n");
    scanf("%s",&s);

    printf("String before reverse = %s\n",s);

    ReverseString(&s[0], strlen(s));

    printf("String after reverse = %s\n",s);

    return 0;
}