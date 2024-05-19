/*E24
Write a structure to store the roll no., name, age 
(between 11 to 14) and address of students (5 
students). Store the information of the students. 
 
1 - Write a function to print the names of all the 
students having age 14. 
2 - Write a function to print the names of all the 
students having even roll no. 
3 - Write a function to display the details of the 
student whose roll no is given (i.e. roll no. entered 
by the user). */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students {
    int rNo;
    char name[50];
    int age;
    char address[100];
};

void printAge14(struct students a[]){
    int c=0;
    for(int i=0; i<5;i++){
        if(a[i].age == 14){
            printf("%s",a[i].name);
            c++;
            printf("\n");
        }
    }
    if(c==0){
        printf("No record found\n");
    }
}

void printRollEven(struct students a[]){
    int c=0;
    for(int i=0; i<5;i++){
        if(a[i].rNo % 2 == 0){
            printf("%s",a[i].name);
            c++;
            printf("\n");
        }
    }
    if(c==0){
        printf("No record found\n");
    }
}

void printAllWithRoll(struct students a[]){
    int c=0;
    for(int i=0; i<5;i++){
        if(a[i].rNo != 0){
            printf("%s",a[i].name);
            c++;
            printf("\n");
        }
    }
    if(c==0){
        printf("No record found\n");
    }
}


int main(){

    struct students s[5];



    for(int i=1; i<=5; i++){
        printf("Enter detials of student %d:\n",i);
        printf("Enter rNo : \n");
        scanf("%d",&s[i-1].rNo);
        printf("Enter name : \n");
        scanf("%s",&s[i-1].name);
        printf("Enter age between 11 and 14 : \n");
        scanf("%d",&s[i-1].age);
        if(s[i-1].age<11 || s[i-1].age>14){
            printf("Pls enter age in specified age\n");
            scanf("%d",&s[i-1].age);
        }
        printf("Enter address : \n");
        scanf("%s",&s[i-1].address);
    }

    //1) function to print age of 14
    printf("Students of age 14 details are : \n");
    printAge14(s);

    //2) functioon to print deatisl fo student wiht even rno.
    printf("Students names who have even rNo : \n");
    printRollEven(s);

    //4) function to print deatails of all students whole roll is given
    printf("Students whose rNo is given : \n");
    printAllWithRoll(s);

    return 0;
}