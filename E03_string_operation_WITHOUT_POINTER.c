/*E04 
Given a string s, perform following operations on a string using function
(Without pointer):
1. Find a length of a string.
2. Print string in reverse order.
3. Copy string s into s1 and print it.
4. Accept another string, say s2. Concatenate s and s2 and print
concatenated string.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//declaration of function
int findLengthOfString(char str[]);
void printStringInReverse(char str[], int l);
void copyAndPrintString(char s2[], char s1[], int l); //we copy content from s1 to s2
void concatenateAndPrint(char s[], char s2[], int l);

//definition of function

int findLengthOfString(char str[]){
    int i;
    for( i=0; str[i]!= '\0'; i++);
    return i;
}

void printStringInReverse(char str[], int l){
    int i;
    for(i=l-1; i>=0; i--){
        printf("%c",str[i]);
    }
    printf("\n");
}

void copyAndPrintString(char s2[], char s1[], int l){
    int i;
    for(int i=0; s1[i] != '\0' ; i++){
        s2[i] = s1[i];
    }
    for(int j =0 ; s2[j] != '\0'; j++){
        printf("%c", s2[j]);
    }
    printf("\n");
}

//need to check this logic below
void concatenateAndPrint(char s[], char s2[], int l){
    int i;
    char str[100];

    for(i=0; s[i]!='\0'; i++){
        str[i] = s[i];
    }
    int j;
    for(j=0; s2[j] != '\0'; j++){
        str[i+j] = s2[j];
    }
    str[i+j] = '\0';

    for(int k=0; str[k]!='\0'; k++){
        printf("%c", str[k]);
    }
    
    printf("\n");
}

int main(){
    char s[100], s1[100], s2[100];
    int l;

    //First we accept the string from the user; 
    printf("Enter the string\n");
    scanf("%s",&s);

    //NOTE : here the size of array is 100 which doesnt necessaryly mean size of string is also 100, depends on how much user entered int it
    //Find the length of the string
    l = findLengthOfString(s);
    printf("The length of the string is %d\n",l);

    //Now, we print the string in reverse order 
    printf("The String in Reverse order is : ");
    printStringInReverse(s,l);

    //Now, we copy the string from s to s1;
    printf("After copying contents from s to s1 we get s1 = ");
    copyAndPrintString(s1, s, l);

    //Now, we accept a string from user and concatenate str and s2; 
    printf("Enter another string s2\n");
    scanf("%s", &s2);
    printf("The concatenate string of s and s2 is : ");
    concatenateAndPrint(s, s2, l);


    return 0;
}