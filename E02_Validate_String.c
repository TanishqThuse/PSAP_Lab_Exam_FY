/*E02
Given a string s containing just the characters like:
'(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if number of opening and closing brackets is same
(irrespective of the sequence of opening and closing brackets)
Test Case 1:
Sample Input: ( )
Sample Output: Valid
Test Case 2:
Sample Input: ( )[ ]{ }
Sample Output: Valid
Test Case 3:
Sample Input: ( [ { }
Sample Output: Invalid*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    int l; //to store length
    int flag = 0; //default it 's not valid

    // char ch; //char to store single inntput from string
    //Take input from the user
    printf("Enter the string\n");
    scanf("%s",&str);
    l = strlen(str);

    for(int i=0; i<l ; i++){
        if(str[i] == '('){
            if(i+1 <l && str[i+1]==')'){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }

        if(str[i] == '['){
            if(i+1 <l && str[i+1]==']'){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }

        if(str[i] == '{'){
            if(i+1 <l && str[i+1]=='}'){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }
    }    
    if(flag == 1){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }   
    return 0;    
}



