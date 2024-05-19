/*E28 
 
Write a C program to copy one file contents to 
another file using character by character. Consider 
a small source file of 4-5 lines only.*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    
    //two file pointers for the task
    FILE *sourceFile, *destFile;
    // char sourceFileName[100], destFileName[100];
    char ch;

    char sourceFileName[] = {"/home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/E28_Files/sourcefile.txt"};

    char destFileName[] = {"/home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/E28_Files/dest_file.txt"};

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Cannot open source file %s\n", sourceFileName);
        exit(1);
    }

    // Open the destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Cannot open destination file %s\n", destFileName);
        fclose(sourceFile);
        exit(1);
    }

    // Copy the contents character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}