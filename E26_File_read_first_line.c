/*E26 
Write a C program to read the first line from a file. 
Test Cases: Suppose the program.txt file contains 
the following text in the current directory. 
Java is Object Oriented Programming. 
How are you? 
Welcome to VIT 
Output: Java is Object Oriented Programming*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//I need to practise more of file handline

int main(){

    //we know file name is program.txt

    FILE *fptr;

    char filename[] = "/home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/program.txt";

    fptr = fopen(filename,"r");
    
    if(fptr == NULL){
        printf("Could not open the file\n");
    }

    char line[100];

    //property of fgets is to take only 1 line as input which works in our favour
    //the if condition specificallt checks one line
    if(fgets(line,sizeof(line),fptr) != NULL){
        printf("%s\n",line);
    }

    //close the file
    fclose(fptr);
    return 0;
}