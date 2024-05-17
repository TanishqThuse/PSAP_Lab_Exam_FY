/*E07
You are given a string s and an integer array index of the same length. The
string s will be shuffled such that the character at the ith position moves
to indices[i] in the shuffled string.
Return the shuffled string.
Test Cases:
Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.

Input: s = "abc", indices = [0,1,2]
Output: "abc"
Explanation: After shuffling, each character remains in its position.*/

//Doubt in this program -> do i have to use malloc compulsoryly
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char shuffled_string(char s[], char shuffled[], int indices[], int l){
    int i;
    // printf("Reached here\n");
    for( i=0; i<l; i++){
        shuffled[i] = s[indices[i]];
    }
    // shuffled[i] = '\0';
    for(int i=0; i<l; i++){
        printf("%c",shuffled[i]);
        // printf("Reached here\n");
        // printf("%c",*shuffled_pointer);
        // shuffled_pointer++;
    }

    // printf("Reached here\n");
    printf("\n");
    return *shuffled;
}

int main(){
    char s[100];
    char shuffled[100];
    
    //TAKE inputs
    printf("Enter the string\n");

    scanf("%s",&s);
    int l = strlen(s);
    
    // i saw a pattern that length of indices was same as string length
    int indices[l]; 
    printf("Enter indices \n");

    for(int i=0; i<l; i++){
        scanf("%d",&indices[i]);
    }

    //Now we have to shuffle the string
    // char* shuffled_pointer = suffledString(s, indices, l, &shuffled[0]);
    printf("The string after shuffing is : ");
    shuffled_string(s,shuffled,indices,l);

    //now print it
    // printf("\nFlag1\n"); ignore
    // printf("\nFlag2\n"); ignore
    return 0;


}