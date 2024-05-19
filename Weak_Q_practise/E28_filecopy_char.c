/*E28

Write a C program to copy one file contents to
another file using character by character. Consider
a small source file of 4-5 lines only.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE* source;
    FILE* destination;

    char source_file[] = {" /home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/E28_Files/sourcefile.txt"};
    char destination_file[] = { "/home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/E28_Files/dest_file.txt"};

    source = fopen(source_file,"r");
    destination = fopen(destination_file,"w");

    if(source == NULL && destination == NULL){
        printf("Failed to open the file\n");
        exit(1);
    }

    char content[100];

    char ch;

    while(( ch = source)!=EOF){
        fread(content, sizeof(content),1,source);
    }



    return 0;
}
