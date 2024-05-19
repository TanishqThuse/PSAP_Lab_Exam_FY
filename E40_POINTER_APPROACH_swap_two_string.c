/*E40 
Write a C program for swapping of two string*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void printString(char a[], char b[]){
    printf("a = %s\n",a);
    printf("b = %s\n",b);
}

void SwapString(char* a, char* b, char a_copy[], char b_copy[]){
    if(strlen(a) >= strlen(b)){
        char *a_ptr = &a_copy[0];
        while(*b != '\0'){
            *a = *b;
            *b = *a_ptr;
            a++;
            b++;
            a_ptr++;
        }
        // a++;
        // b++;
        while(*a != '\0'){
            *b = *a;
            a++;
            b++;
        }
        *b = '\0';
    }
    // *a = '\0';
}

int main(){
    char a[100], b[100];
    for(int i=0; i<2; i++){
        printf("Enter two strings\n");
        if(i==0) scanf("%s",&a);
        else{
            scanf("%s",&b);
        }
    }

    printf("Before swapping \n");
    printString(a,b);

    // //Approach 1
    // char temp[100];
    // ()
    // char a_copy;
    SwapString(&a[0],&b[0], a,b);

    printf("After swapping :\n");
    printString(a,b);
}