/*E27 
Write a C program to create a student database using 
file. 
Perform following operations: 
1. Open file 
2. Write five records in file. 
3. Read all five records from file. 
4. Search for a particular student from  file and 
print his/her details*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STUDENTS 5

// Define the structure to store student details
struct Student {
    int rNo;
    int age;
    char name[50];
    char address[50];
    int total_marks;
};

int main() {
    struct Student students[NUM_STUDENTS];
    char file[] = "student_database.txt";
    FILE* fptr;

    // Enter details for 5 students
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rNo);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter address: ");
        scanf("%s", students[i].address);
        printf("Enter total marks: ");
        scanf("%d", &students[i].total_marks);
    }

    // Open file for writing
    fptr = fopen(file, "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    // Write records to file
    fwrite(students, sizeof(struct Student), NUM_STUDENTS, fptr);
    fclose(fptr);

    // Open file for reading
    fptr = fopen(file, "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    // Read records from file
    struct Student readStudents[NUM_STUDENTS];
    fread(readStudents, sizeof(struct Student), NUM_STUDENTS, fptr);

    // Print all records read from the file
    printf("\nRecords read from file:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Roll Number: %d, Age: %d, Name: %s, Address: %s, Total Marks: %d\n",
               readStudents[i].rNo, readStudents[i].age, readStudents[i].name,
               readStudents[i].address, readStudents[i].total_marks);
    }

    // Search for a particular student by roll number
    int searchRollNumber;
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRollNumber);

    int found = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (readStudents[i].rNo == searchRollNumber) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", readStudents[i].rNo);
            printf("Age: %d\n", readStudents[i].age);
            printf("Name: %s\n", readStudents[i].name);
            printf("Address: %s\n", readStudents[i].address);
            printf("Total Marks: %d\n", readStudents[i].total_marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", searchRollNumber);
    }

    fclose(fptr);

    return 0;
}



// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// /*
// Syntax of fwrite(&pointer to database= &student, sizeof(student),1, file)
// */
// struct Student {
//     int rNo;
//     int age;
//     char name[50];
//     char address[50];
//     int total_marks;
// };

// int main(){

//     FILE* fptr;
//     struct Student s1;

//     //1) Open file
//     char file[] = "/home/tanishqthuse/Desktop/VS_COde/PSAP_Lab_Exam_FY/E27_Program_file.txt";

//     fptr = fopen(file, "w");

//     //2) Write five recors in file
//     //Enter details
//     printf("Enter deatils of student\n");
//     printf("Enter roll no \n");
//     scanf("%d",&s1.rNo);
//     // fflush(stdin);

//     fwrite(&s1.rNo, sizeof(s1.rNo),1,fptr);
//     printf("Enter age \n");
//     scanf("%d",&s1.age);
//     // fflush(stdin);
//     printf("Enter name \n");
//     scanf("%s",&s1.name);
//     // fflush(stdin);
//     printf("Enter addess \n");
//     scanf("%s",&s1.address);
//     // fflush(stdin);
//     printf("Enter total_marks \n");
//     scanf("%d",&s1.total_marks);
//     // fflush(stdin);

//     // // fwrite(&s1, sizeof(s1),1,fptr);
//     // fwrite(&s1, sizeof(s1),5,fptr);
//     fclose(fptr);

//     //3) Read recoed
//     fptr = fopen(file, "r");

//     if(fptr == NULL){
//         printf("file not found\n");
//     }

//     while(fptr !=  NULL ){
//         printf("%d",fgetc(fptr));
//     }

//     return 0;
// }