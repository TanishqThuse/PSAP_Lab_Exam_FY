/*E30 
Accept number of rows and columns and read elements of matrix. 
1. Print matrix in row major format. 
2. Print matrix in column major format. 
Test Case 1: 
Number of rows:2 
Number of columns: 3 
Matrix Elements: 1 2 3 4 5 6 
Row Major: 
1    2    3 
4    5    6 
Column Major 
1     3     5   
2     4     6*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int r_no, c_no;
    printf("Enter row numbs\n");
    scanf("%d",&r_no);
    printf("Enter coloumn numbs\n");
    scanf("%d",&c_no);

    int a[r_no][c_no], b[r_no][c_no];

    printf("Enter elements\n");
    for(int i=0; i<r_no; i++){
        for(int j=0; j<c_no; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // for(int i=0; i<r_no; i++){
    //     for(int j=0; j<c_no; j++){
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    printf("Row major is : \n");
    for(int i=0; i<r_no; i++){
        for(int j=0; j<c_no; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Coloumn major is : \n");
    for(int j=0; j<c_no; j++){
        for(int i=0; i<r_no; i++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}