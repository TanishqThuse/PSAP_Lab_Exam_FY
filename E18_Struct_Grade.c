/*E18
Write a C program to store student data(roll no, name, 
marks of 5 subjects)  in structure. Then calculate the 
grade of a student using a logical operator. 
 
(76-99 Distinction 
60-75 First Class 
50-59 Second Class 
40-49 Pass Class 
Below 40 Fail)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
    int roll_no;
    char name[50];
    int marks[5];
    int totalmarks;
    char grade;
};

char CalculateGrade(char GRADE,int ch){
    if(ch>=76 && ch<=99){
        return 'A';
    }
    else if(ch>=60 && ch<=75){
        return 'B';
    }
    else if(ch>=50 && ch<=59){
        return 'C';
    }
    else if(ch>=40 && ch<=49){
        return 'D';
    }
    else{
        return 'F';
    }
}

void printStudentDetails(struct Student s){
    printf("Name : %s\n", s.name);
    printf("Roll no. : %d\n", s.roll_no);
    for(int i=0; i<5;i++){
        printf("Marks in %d subject is %d\n",i,s.marks[i]);
    }
    printf("Total marks : %d\n", s.totalmarks);
    printf("Grade : %c\n",s.grade);
}

int main(){

    struct Student s1;
    printf("Enter the roll number of the student: \n");
    scanf("%d",&s1.roll_no);

    printf("Enter the name of the student: \n");
    scanf("%s",s1.name);

    s1.totalmarks = 0;
    printf("Enter the marks of the student in 5 subjects: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&s1.marks[i]);
        s1.totalmarks += s1.marks[i];
    }


    s1.grade = CalculateGrade(s1.grade,s1.marks[0]);
    
    //Now print the deatils of the studnet using poinyters
    printStudentDetails(s1);
    printf("\nHere we have given grade only on the basis of subject code %d",0);    
    printf("\n");
    return 0;
}