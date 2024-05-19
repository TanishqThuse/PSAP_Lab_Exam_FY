/*E22
Perform following operations on 2D Matrix: 
84.  Accept  number  of  rows  and  columns  of  two 
matrices and read elements of both matrices. 
85.  Print Transpose of both matrices. 
86.  Print Diagonal elements of both matrices.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Condition -> We assume usrr always enter square matrix coz of diagonal print 

int main(){

    //1)Accepting the inputs
    printf("Enter number of rows and coloumns of matrix 1\n");
    int n1,n2, m1,m2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Enter number of rows and coloumns of matrix 1\n");
    scanf("%d",&m1);
    scanf("%d",&m2);

    int a[n1][n2],b[m1][m2];

    printf("Enter elements of matrix 1: \n");
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of matrix 2: \n");
    for(int i=0; i<m1; i++){
        for(int j=0; j<m2; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("The transpose of matrix 1 is : \n");
    for(int j=0; j<n2; j++){
        for(int i=0; i<n1; i++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of matrix 2 is : \n");
    for(int j=0; j<m2; j++){
        for(int i=0; i<m1; i++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //3) To print the diagonal elements
    printf("The diagonal elements of matrix 1 is : \n");
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(i==j)
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The diagonal elements of matrix 2 is : \n");
    for(int i=0; i<m1; i++){
        for(int j=0; j<m2; j++){
            if(i==j)
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }













    return 0;
}