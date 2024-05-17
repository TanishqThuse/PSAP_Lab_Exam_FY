/*E05
Given a string s, return true if it a Palindrome or false otherwise.
Test Cases:
Case 1:
Input: MADAM
Output: true
Case 2:
Input: CAR
Output: false*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char str[100];
    bool flag = false;
    //Taking input
    printf("Enter a string: ");
    scanf("%s", &str);

    //Finding length of string
    int l = strlen(str);

    //Checking if it is palindrome
    for(int i=0; str[i] != '\0' ;i++){
        if(str[i] != str[l-i-1]){
            flag = false;
            // printf("true\n");
        }
        else{
            flag = true;
        }
    }
    if(flag == false){
        printf("false\n");
    }
    else{
        printf("true\n");
    }

    return 0;

}

