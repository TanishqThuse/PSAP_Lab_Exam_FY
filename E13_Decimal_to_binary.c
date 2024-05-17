/*E13
Write a program to convert decimal to binary 
number. 
Test Cases: 
Input : 5 
Output: 101
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

This code is incomplete and has errors. Please complete the code and remove the errors.
Also logic is wrong. Please correct the logic and complete the code.

int findDigits(int n){
    int c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    return c;
}

int convertDecToBin(int n, char *bin_num){
    int i=0;
    while(n>0){
        bin_num[i] = n%2;
        n=n/2;
        i++;
    }
    return i;
}

void convertIntToChar(int n, char *ch){
    while(n>0){
        *ch += n%10;
        n=n/10;
    }
    ch = '\0';

}

void reverseBin(char bin_num[], char *bin_num_reverse){
    int i=0;
    while(bin_num[i]!='\0'){
        i++;
    }
    int j=0;
    while(i>=0){
        bin_num_reverse[j] = bin_num[i];
        i--;
        j++;
    }
}

int main(){

    int n;
    
    //taking inputs
    printf("Enter a number \n");
    scanf("%d",&n);

    //we will find the number of digits in it
    int digits = findDigits(n);
    char num[100];

    char bin_num[100]; 
    char bin_num_reverse[100]; //we always need to write the vallues from right to left in paper

    // char num[digits];

    char bin_num[digits]; 
    char bin_num_reverse[digits]; //we always need to write the vallues from right to left in paper

    convertIntToChar(n,num);

    //converting to binary
    convertDecToBin(n, bin_num);

    //reversing the binary number
    reverseBin(bin_num, *bin_num_reverse);




    return 0;
}