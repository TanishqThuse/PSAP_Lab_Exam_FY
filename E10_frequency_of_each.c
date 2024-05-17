// /*E10
// Write a C program to find the frequency of each character in a string. 
// Test Cases: String: This book is very good 
// Frequency of T:1 
// Frequency of h:0 
// Frequency of o:4 and so on for every distinct character. 
// */

//CHATGPT KA ANS -> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100];
    int frequency[256] = {0}; // Initialize frequency array for all ASCII characters

    printf("Enter the string: \n");
    fgets(s, sizeof(s), stdin);

    // Calculate frequency
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') // Ignore spaces
            frequency[s[i]]++;
    }

    // Print frequency
    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("Frequency of %c: %d\n", i, frequency[i]);
        }
    }

    return 0;
}




// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>



// //My simple logic, there are 26 alphabets, so I will create an array of 26*2 elements to store the frequency of each alphabet
// int main(){
//     char s[100];
//     int freq[200]; //array to store respective frequencies

//     //To get input
//     printf("Enter the string: \n");
//     fgets(s,sizeof(s),stdin);
//     printf("S");
//     for(int i=0; s[i]='\n';i++){ //EDIT -> so this s[i] = '\n' was the entire culprit !! tf!
//         if(s[i]=='\n'){
//             s[i]=='\0';
//         }
//     }

//     //to initialise each freq to 0 
//     for(int i=0; i<200; i++){
//         freq[i] = 0;
//     }

//     //Caution : The code has some flawed logic but it works for the given test case

//     // //To allocate the freq
//     // for(int j=0; j<256; j++){
//     //     if(s[j] != ' '){ // to ignore whitespace
//     //         for(int i=0; s[i]!='\0';i++){
//     //             if((s[i]>='A' && s[i]<='Z')&&(j>=(int)'A' && j<=(int)'Z') ){
//     //                 if(s[i]==j){
//     //                     freq[j]++;
//     //                 }
//     //             }
//     //             if((s[i]>='a' && s[i]<='z')&&(j>=(int)'a' && j<=(int)'z') ){
//     //                 if(s[i]==j){
//     //                     freq[j]++;
//     //                 }
//     //             }
//     //         }
//     //     }

//     //2nd try
//     for(int i=0; s[i]!='\0'; i++){
//         if(s[i]!=' '){//ignore blanck space
//             int ch = s[i]; //by default stores ascii
//             printf("%c %d ", ch,ch);
//             freq[ch]++;
//         }

//     printf("The freq are : \n");
//     for(int i=0; s[i]!='\0';i++){
//         if(freq[i]!='\0'){
//             printf("Frequency of %c is : %d", i, freq[i]);
//         }
//     }
//     return 0;




//     // char s[100];
//     // int upper[26], lower[26]; //arrays to store respective frequencies
//     // int len;
//     // //First we take input from user
//     // printf("Enter the string: \n");
//     // // scanf("%s",&s);
//     // fgets(s, sizeof(s),stdin);
//     // for(int i=0; i<strlen(s);i++){
//     //     if(s[i]=='\n'){
//     //         s[i]='\0';
//     //         break;
//     //     }
//     // }

//     // //Then we find the length of the string
//     // len = strlen(s);

//     // //Then we initialize the frequency of each alphabet to 0
//     // for(int i=0; i<26; i++){
//     //     upper[i] = 0;
//     //     lower[i] = 0;
//     // }

//     // //Then we give the frequency of each alphabet
//     // char ch_upper = 'A';
//     // char ch_lower = 'a';
//     // for(int i=0; i<len; i++){
//     //     for(int j=0; j<26; j++){
//     //         if(s[i]==ch_upper){
//     //             upper[j]++;
//     //         }
//     //         if(s[i]==ch_lower){
//     //             lower[j]++;
//     //         }
//     //         ch_upper++;
//     //         ch_lower++;
//     //     }
//     // }

//     // //Then we print the frequency of each alphabet

//     // //First we print uppercase alphabets
//     // for(int i=0; i<26; i++){
//     // if(upper[i]!=0){
//     //     printf("Frequency of %c: %d\n", 'A'+i, upper[i]);
//     // }
//     // }

//     // //Secondly, we print lowercase alphabets
//     // for(int i=0; i<26; i++){
//     //     if(lower[i]!=0){
//     //         printf("Frequency of %c: %d\n", 'a'+i, lower[i]);
//     //     }
//     // }
//     // return 0;
// }}