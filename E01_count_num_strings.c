/*E01
Given a string, S , consisting of alphabets and digits, find the number of
alphabets and digits in the given string.
Test Case 1:
Sample Input: a11472o5t6
Number of digits: 7
Number of alphabets:3*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int c_alphabets = 0;
    int c_digits = 0;
    int l;

    //Take input from the user
    printf("Enter the string\n");
    scanf("%s", str);
    l = strlen(str);

    //Iterate through the string
    for(int i=0; i<l ; i++){
        int ch = str[i];
        if(ch >= 'A' && ch <= 'Z'){
            c_alphabets++;
        }
        else if(ch >= 'a' && ch <= 'z' ){
            c_alphabets++;
        }
        else if(ch >= '0' && ch <= '9'){
            c_digits++;
        }
    } 
    printf("\nNumber of digits = %d", c_digits);
    printf("\nNumber of alphabets = %d\n", c_alphabets);









    return 0;
}