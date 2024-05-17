/*E11 : 
Write a C program to count the number of Vowels and 
Consonants. 
Test Cases: String: C is a programming language. 
Vowels: 9 
Consonants: 14*/

//Since the string inclused whitespacwe we gonnna use fgets

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[100];
    int len;
    int vowels = 0;
    int cons = 0;

    //take inputs
    printf("Enter string\n");
    fgets(s,sizeof(s),stdin);
    len = strlen(s);
    
    //adding null pointer
    for(int i=0; i<len;i++){
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
    }
    for(int i=0; s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowels++;
        }
        else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            cons++;
        }
    }

    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n",cons);
    
    
    
    return 0;
}