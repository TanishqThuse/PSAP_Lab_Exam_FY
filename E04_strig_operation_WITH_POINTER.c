/*E04
Given a string s, perform following operations on a string using function
(With pointer):
1. Find a length of a string.
2. Print string in reverse order.
3. Copy string s into s1 and print it.*/

#include<stdio.h>
#include<string.h>

//Declaration
int findLengthOfString(char *);
void printReverse(char *, int l);
void copyAndPrint(char *, char* s1);

//Defination
int findLengthOfString(char* s){
    int i;
    for(i=0; *s != '\0';i++){
        s++;
    }
    return i;
}


//we assume the last character pointer is passed
void printReverse(char *s, int l){
    int i;
    // now we have to point the s to the last index ('\0')
    for(int j=0; *s != '\0'; j++){
        s++;
        // break;
    }
    // now s points to last index

    //Now we can print it
    for(i = l ; i>=0 ; i--){
        printf("%c", *s);
        s--;
        // break;
    }
    printf("\n");
}   

void copyAndPrint(char* s, char* s1){
    //i realised whiel loop is much better for pointers in c
    int length = findLengthOfString(s);
    for(int i=0; *s != '\0'; i++){
        *s1 = *s;
        s++;
        //EDIT: s1++ kon karega be!!??
        s1++;
    }
    //EDIT: abhi s1++ karke last index pe agaya na?! to first index pe kon jayga?!
    //now we musk make the s1 pooint to it's 0th index

    for(int k=length-1; k>=0 ; k--){
        s1--;
    }

    for(int j=0; *s1 != '\0' ;j++){
        printf("%c", *s1);
        s1++;
    }
    printf("\n");
}

int main(){
    char s[100], s1[100];
    int l; //store length

    //Taking input string
    printf("ENter the string\n");
    scanf("%s",&s);

    //1)To find length of string
    l = findLengthOfString(s);
    printf("The length of string is : %d\n", findLengthOfString(&s[0]));

    //2)To Print string in reverse order using pointers
    //On a side note, this could have been solved much more fast if i directly passes the last index
    //But since i got this idea after writing code , i am leaving it as it as
    printf("The string in reverse order is : ");
    printReverse(&s[l-1],l);


    //3) to Copy string s into s1 and print it
    printf("After copying s to s1 we get s1 = ");
    copyAndPrint(&s[0], &s1[0]);

    return 0;

}