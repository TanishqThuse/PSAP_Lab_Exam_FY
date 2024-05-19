/*E31 
 
Write a C Program to count number of characters in the file and 
print every character on new line on screen*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE* fptr; 

    char file[] = "/home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/E31_Program_file.txt";

    fptr = fopen(file, "r");

    char ch;
    if(fptr == NULL){
        printf("File not opened\n"); 
        exit(1);
    }
    //now the content in file is hii (char = 3)
    int c=0;
    while((ch = fgetc(fptr))!=EOF){
        c++;
        // printf("%c\n",ch);
    }
    printf("No. of characters = %d\n",c);

    fclose(fptr);

    //Now print each char by char file

    fptr = fopen(file, "r");

    if(fptr == NULL){
        printf("Not succesfull opening file\n");
        exit(1);
    }


    while((ch = fgetc(fptr))!=EOF){
        printf("%c\n",ch);
    }

    return 0;
}