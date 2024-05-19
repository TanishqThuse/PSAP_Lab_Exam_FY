// // /*E21
// // 1. Find  the  sum  of  two  one-dimensional  arrays 
// // using  Dynamic  Memory Allocation  and  functions. 
// // Array should be passed as a function argument and 
// // in function should perform addition of passed arrays*/

// // #include<stdio.h>
// // #include<stdlib.h>
// // #include<string.h>


// // // This code is incomplete and has errors. Please complete the code and remove the errors.
// // // Also logic is wrong. Please correct the logic and complete the code.

#include <stdio.h>
#include <stdlib.h>

// Function to sum two arrays
int* SUM(const int* a, const int* b, int size) {
    int* sumOfArrays = (int*)malloc(size * sizeof(int));
    if (sumOfArrays == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        sumOfArrays[i] = a[i] + b[i];
    }

    return sumOfArrays;
}

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int* arr1 = (int*)malloc(size * sizeof(int));
    int* arr2 = (int*)malloc(size * sizeof(int));

    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    int* sumArray = SUM(arr1, arr2, size);

    printf("The sum of the arrays is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr1);
    free(arr2);
    free(sumArray);

    return 0;
}



// /*E21
// 1. Find  the  sum  of  two  one-dimensional  arrays 
// using  Dynamic  Memory Allocation  and  functions. 
// Array should be passed as a function argument and 
// in function should perform addition of passed arrays*/

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>


// // This code is incomplete and has errors. Please complete the code and remove the errors.
// // Also logic is wrong. Please correct the logic and complete the code.


// int* SUM(const int* a, const int* b, int size){

//     int* sumOfArrays = (int*)malloc(size*sizeof(int));

//     int* sum = sumOfArrays;

//     printf("The sum arr is :\n");
//     for(int i=0; i<size; i++)
//     {
//         // sumOfArrays[i] = a[i] + b[i];
//         *sum = *a + *b;
//         // // printf("%d ",*sumOfArrays);
//         sum++ , a++, b++;
//     }
//     // for(int i=0; i<size; i++){
//         // sumOfArrays++;
//     // }
//     // for(int i=0;)
//     return sumOfArrays;
// }

// int main(){
//     int size;

//     printf("Enter size of array");
//     scanf("%d",&size);

//     int* arr1 = (int*)malloc(size*sizeof(int));
//     int* arr2 = (int*)malloc(size*sizeof(int));

//     if(arr1 == NULL || arr2 == NULL){
//         printf("Memory allocation failed !\n");
//         exit(1);
//     }

//     printf("Enter elements for the first array\n");
//     for(int i=0; i<size ; i++){
//         scanf("%d", arr1);
//         arr1++;
//     }

//     printf("Enter elements for the second array\n");
//     for(int i=0; i<size ; i++){
//         scanf("%d",arr2);
//         arr2++;
//     }

//     int* sumArrayPointer = SUM(arr1,arr2,size);

//     for(int i=0; i<size; i++){
//         printf("%d ",*sumArrayPointer);
//         sumArrayPointer++;
//     }

//     free(arr1);
//     free(arr2);
//     free(sumArrayPointer);
//     return 0;
// }


// // int* SUM(const int* a, const int* b, int size){

// //     int* sumOfArrays = (int*)malloc(size*sizeof(int));

// //     int* sum = sumOfArrays;

// //     printf("The sum arr is :\n");
// //     for(int i=0; i<size; i++)
// //     {
// //         // sumOfArrays[i] = a[i] + b[i];
// //         *sum = *a + *b;
// //         // // printf("%d ",*sumOfArrays);
// //         sum++ , a++, b++;
// //     }
// //     // for(int i=0; i<size; i++){
// //         // sumOfArrays++;
// //     // }
// //     // for(int i=0;)
// //     return sumOfArrays;
// // }

// // int main(){
// //     int size;

// //     printf("Enter size of array");
// //     scanf("%d",&size);

// //     int* arr1 = (int*)malloc(size*sizeof(int));
// //     int* arr2 = (int*)malloc(size*sizeof(int));

// //     if(arr1 == NULL || arr2 == NULL){
// //         printf("Memory allocation failed !\n");
// //         exit(1);
// //     }

// //     printf("Enter elements for the first array\n");
// //     for(int i=0; i<size ; i++){
// //         scanf("%d", arr1);
// //         arr1++;
// //     }

// //     printf("Enter elements for the second array\n");
// //     for(int i=0; i<size ; i++){
// //         scanf("%d",arr2);
// //         arr2++;
// //     }

// //     int* sumArrayPointer = SUM(arr1,arr2,size);

// //     for(int i=0; i<size; i++){
// //         printf("%d ",*sumArrayPointer);
// //         sumArrayPointer++;
// //     }

// //     free(arr1);
// //     free(arr2);
// //     free(sumArrayPointer);
// //     return 0;
// // }