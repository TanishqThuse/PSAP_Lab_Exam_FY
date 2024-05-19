/*E37 
FY-PSAP LAB EXAM               AY:2023-24            SEM-I               
 
Write a C program to accept two matrices and check if they are equal 
or  not.  Order  of  both  matrices  must  be  accepted  from  user  at  run 
time*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    int row, coloumn;
    /*Interesting thing to note : 
    
    int matrix1[row][coloumn], matrix2[row][coloumn];
    
    if I uncomment the above line then i get error : 
Segmentation fault (core dumped)

    Maybe it's because the compiler does'nt exactly know how much space to allocate and cant go the very next line where i give values for rows and coloumns 
    Interting!

*/


    printf("Enter the number of rows: \n");
    scanf("%d",&row);

    printf("ENter the number of coloumns\n");
    scanf(" %d",&coloumn);
    int matrix1[row][coloumn], matrix2[row][coloumn];

    printf("Enter elements for matrix 1:\n");

    for(int i=0; i<row; i++){
        for(int j=0; j<coloumn; j++){
            scanf(" %d",&matrix1[i][j]);            
        }
    }


    printf("Enter elements for matrix 2:\n");

    for(int i=0; i<row; i++){
        for(int j=0; j<coloumn; j++){
            scanf(" %d",&matrix2[i][j]);            
        }
    }

    int flag = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<coloumn; j++){
            if(matrix1[i][j] != matrix2[i][j]){
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0){
        printf("Both matrices are equal\n");
    }else{
        printf("Both matrices are not equal\n");
    }





    return 0;

}