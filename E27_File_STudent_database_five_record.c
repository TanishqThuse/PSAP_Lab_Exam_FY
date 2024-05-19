/*E27 
Write a C program to create a student database using 
file. 
Perform following operations: 
1. Open file 
2. Write five records in file. 
3. Read all five records from file. 
4. Search for a particular student from  file and 
print his/her details*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Syntax of fwrite(&pointer to database= &student, sizeof(student),1, file)
*/


struct Student {
    int rNo;
    int age;
    char name[50];
    char address[50];
    int total_marks;
};

int main(){

    FILE* fptr;
    struct Student s1;

    //1) Open file
    char file[] = "/home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/E27_Program_file.txt";

    fptr = fopen(file, "w");

    //2) Write five recors in file
    //Enter details
    printf("Enter deatils of student\n");
    printf("Enter roll no \n");
    scanf("%d",&s1.rNo);
    fflush(stdin);
    printf("Enter age \n");
    scanf("%d",&s1.age);
    // fflush(stdin);
    printf("Enter name \n");
    scanf("%s",&s1.name);
    // fflush(stdin);
    printf("Enter addess \n");
    scanf("%s",&s1.address);
    // fflush(stdin);
    printf("Enter total_marks \n");
    scanf("%d",&s1.total_marks);
    // fflush(stdin);

    fwrite(&s1.rNo, sizeof(s1.rNo),1,fptr);
    fclose(fptr);

    //3) Read recoed
    fptr = fopen(file, "r");

    if(fptr == NULL){
        printf("file not found\n");
    }

    while(fptr !=  NULL ){
        printf("%d",fgetc(fptr));
    }

    return 0;
}