/*E16
Write  a  C  Program  to  read  and  print  name  and 
other  details  like  mobile  number,  marks  of  5 
subjects of n number of students using Structure. 
Print  data  of  top  5  students  (  top  5  should  be 
calculated based on the entered marks) #include <stdio.h> 
#include <stdlib.h> 
 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// This code is incomplete and has errors. Please complete the code and remove the errors.
// Also logic is wrong. Please correct the logic and complete the code.


// int InputDetails(struct Student s) ;


struct Students {
    char name[50];
    long long mobile;
    int marks[5];
    int totalMarks;
};

struct Students InputDetails(struct Students S){
    printf("Enter name, mobile, marks[5], totalMarks\n");
    scanf("%s",&S.name);
    scanf("%lld",&S.mobile);
    S.totalMarks = 0;
    for(int i=0; i<5; i++){
        scanf("%d",&S.marks[i]);
        S.totalMarks += S.marks[i];
    }
    return S;
}


int main(){
    printf("Enter the number of students\n");
    int n;
    scanf("%d",&n);

    //creating an array of struct students
    struct Students s[n];
 
    //Taking inputs from the user
    for(int i=0; i<n; i++){
        s[i] = InputDetails(s[i]);
    }

    //Now we have to decide and print the top five students
    // we will sort in decending order
    //To make things simpler i will write sorting algo here only in main
    
    //Creat a temp struct
    struct Students temp;
    for(int i=0; i<n ;i++){
        if(i+1 < n && s[i].totalMarks < s[i+1].totalMarks){
            temp = s[i];
            s[i] = s[i+1];
            s[i] = temp;
        }
    }
    
    //Now with the above logic we have #highest rank == 0 at 0th rank
    printf("The rank list is as follows : \n");
    for(int i=0; i<5 ; i++){
        printf("Student at Rank %d has %d marks and %s Name\n", i,s[i].totalMarks,s[i].name);
    }

    return 0;
}