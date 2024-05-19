/*E40 
Write a C program for swapping of two string*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s1[100], s2[100];
    printf("Enter two strings : \n");
    scanf("%s %s",s1,s2);

    printf("Before swapping : \n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);

    char temp[100];
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("After swapping : \n");
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);

    return 0;

}