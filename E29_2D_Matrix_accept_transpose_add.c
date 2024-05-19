/*E29 
Perform following operations on 2D Matrix: 
FY-PSAP LAB EXAM               AY:2023-24            SEM-I               
 
159. Accept number of rows and columns of two 
matrices and read elements of both matrices. 
160. Print Transpose of both matrices. 
161. Print Addition of two matrices.*/


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
    //2) Transpose of matrix
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

    //3) Add matrix
    printf("The sum of the two matrices is \n");
    for(int i=0; i<n1 ; i++)
    {
        for(int j=0; j<n2; j++){
            printf("%d " , a[i][j] + b[i][j]);
        } 
        printf("\n");
    }

    return 0;
}