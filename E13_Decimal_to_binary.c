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
#include<ctype.h>

// This code is incomplete and has errors. Please complete the code and remove the errors.
// Also logic is wrong. Please correct the logic and complete the code.

// int decimal_to_binary(int n){

// }


int main(){
    int n;
    printf("ENter a number\n");
    scanf("%d",&n);

    int rem;
    int i=0;
    int a[10];
    while(n>0){
        rem = n % 2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    // printf("\n");

    for(int j=i-1; j>=0; j--){
        printf("%d ",a[j]);
    }
    printf("\n");

    return 0;


    //Below are just so many failed logic for such a simple problems

    // int bin[10];
    // int c=0; //to count number of digits
    // // int i=0;
    // while(n>0){
    //     bin[c] = n%2;
    //     n=n/2;
    //     c++;
    // }

    // printf("The binary is : ");
    // int bin_rev[c];
    // //now we gotta print that in reverse(bin)
    // int j =0;
    // for(int i=c-1; i>=0; i++){
    //     bin_rev[i] = bin[i];
    // }
    // for(int i=0; i<c; i++){
    //     printf("%d", bin_rev[i]);
    // }
    // printf("\n");




}






// int main(){
//     int n;
//     printf("Enter a number\n");
//     scanf("%d",&n);
//     int n1 = n;
//     char bin[100];
//     int rem;
//     char ch;
//     int i=0;
//     do{
//         rem =rem%2;
//         // bin =
//         if(rem==1){
//              ch = '1';
//         }
//         else{
//              ch='0';
//         }
//         bin[i] = ch;
//         n=n/10;
//         i++;
//     }while(n>0);
//     bin[i]='\0';
//     printf("The binary number of %d is : %s  \n",n1,bin);
// }



// int findDigits(int n){
//     int c=0;
//     while(n>0){
//         c++;
//         n=n/10;
//     }
//     return c;
// }

// int convertDecToBin(int n, char *bin_num){
//     int i=0;
//     while(n>0){
//         bin_num[i] = n%2;
//         n=n/2;
//         i++;
//     }
//     return i;
// }

// void convertIntToChar(int n, char *ch){
//     while(n>0){
//         *ch += n%10;
//         n=n/10;
//     }
//     ch = '\0';

// }

// void reverseBin(char bin_num[], char *bin_num_reverse){
//     int i=0;
//     while(bin_num[i]!='\0'){
//         i++;
//     }
//     int j=0;
//     while(i>=0){
//         bin_num_reverse[j] = bin_num[i];
//         i--;
//         j++;
//     }
// }

// int main(){

//     int n;

//     //taking inputs
//     printf("Enter a number \n");
//     scanf("%d",&n);

//     //we will find the number of digits in it
//     int digits = findDigits(n);
//     char num[100];

//     char bin_num[100];
//     char bin_num_reverse[100]; //we always need to write the vallues from right to left in paper

//     // char num[digits];

//     char bin_num[digits];
//     char bin_num_reverse[digits]; //we always need to write the vallues from right to left in paper

//     convertIntToChar(n,num);

//     //converting to binary
//     convertDecToBin(n, bin_num);

//     //reversing the binary number
//     reverseBin(bin_num, *bin_num_reverse);




//     return 0;
// }
