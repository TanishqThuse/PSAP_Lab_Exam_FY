/*E33 
Write a c program to insert a sub-string in to given main string. 
 
Enter First String: Life is beautiful 
Enter Second String: very 
Enter the position to insert second string in first: 9 
Output: Life is very beautifu*/

#include<stdio.h>
#include<string.h>

int main(){

    char s[100], substring[100];
    printf("Enter string 1\n");
    fgets(s, sizeof(s),stdin);

    for(int i=0; i<=100;i++){
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
    }

    printf("Enter string 2\n");
    fgets(substring, sizeof(substring),stdin);
    for(int i=0; i<=100; i++){
        if(substring[i]=='\n'){
            substring[i]='\0';
            break;
        }
    }

    int pos;
    printf("Enter the position to insert second string in first: \n");
    scanf("%d", &pos);

    char newstring[100];
    int j=0,i;
    for( i=0; i<pos; i++){
        newstring[j]=s[i];
        j++;
    }
    for(int k=0; substring[k]!='\0'; k++){
        newstring[j]=substring[k];
        j++;
    }
    for(int l=i ; s[i]!='\0';i++){
        newstring[j]=s[i];
        j++;
    }
    newstring[j]='\0';

    printf("Output: %s\n", newstring);










    return 0;
}