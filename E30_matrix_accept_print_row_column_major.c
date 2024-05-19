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



#include <stdio.h>


void printRowMajor(int matrix[][100], int rows, int cols) {
    printf("Row Major:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


void printColumnMajor(int matrix[][100], int rows, int cols) {
    printf("Column Major:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int rows, cols;

    // Accept number of rows and columns
    printf("Number of rows: ");
    scanf("%d", &rows);
    printf("Number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];

    // Accept matrix elements
    printf("Matrix Elements: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix in row major format
    printRowMajor(matrix, rows, cols);

    // Print matrix in column major format
    printColumnMajor(matrix, rows, cols);

    return 0;
}





// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     int r_no, c_no;
//     printf("Enter row numbs\n");
//     scanf("%d",&r_no);
//     printf("Enter coloumn numbs\n");
//     scanf("%d",&c_no);

//     int a[r_no][c_no], b[r_no][c_no];

//     printf("Enter elements\n");
//     for(int i=0; i<r_no; i++){
//         for(int j=0; j<c_no; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     // for(int i=0; i<r_no; i++){
//     //     for(int j=0; j<c_no; j++){
//     //         scanf("%d",&a[i][j]);
//     //     }
//     // }
//     printf("Row major is : \n");
//     for(int i=0; i<r_no; i++){
//         for(int j=0; j<c_no; j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("Coloumn major is : \n");
//     for(int j=0; j<c_no; j++){
//         for(int i=0; i<r_no; i++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }