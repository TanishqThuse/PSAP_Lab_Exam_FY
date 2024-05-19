/*E32 
Write a c program to Delete all occurrences of Character from the 
String. 
Test case: Computer_engineering 
Enter character to delete: e 
Output: Computr_nginring*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100], str2[100];
    char ch;

    printf("Enter the string\n");
    scanf("%s", str);
    printf("Enter char to be removed\n");
    scanf(" %c", &ch);

    int j = 0; // Variable to keep track of the index in the modified string
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ch){   
            str2[j] = str[i];
            j++; // Increment the index in the modified string only when a character is not deleted
        }
    }

    str2[j] = '\0'; // Add null character at the end of the modified string

    printf("The modified string is\n");
    for(int i = 0; str2[i] != '\0'; i++){
        printf("%c", str2[i]);
    }
    printf("\n");

    return 0;
}