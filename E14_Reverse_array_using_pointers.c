// E14
/*Write a C program to reverse an array using
pointers.
*/

#include<stdio.h>
#include<stdlib.h>

void Reverse_Array(int* a, int n){
    int* start = a;
    int* end = a + n -1 ;
    for(int i=0; i<n/2 ; i++){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void printArray(int nums[], int l){
    for(int i=0; i<l ; i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
}




int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;

    printf("Original Array is : ");
    printArray(nums, n);

    Reverse_Array(&nums[0],n);

    printf("New array is : ");
    printArray(nums,n);


}


// void printArray(int* arr, int l){
//     for(int i=0; i<l ; i++){
//         printf("%d",*arr);
//     }
// }

// This code is incomplete and has errors. Please complete the code and remove the errors.
// Also logic is wrong. Please correct the logic and complete the code.


// int reverseArray(int arr[], int* revarr, int l){
//     for(int i=l-1; i>=0; i--){
//         *revarr = arr[l-i-1];
//         revarr++;
//     }
// }

// int main(){
//     int n ;

//     //takin input
//     printf("Enter the number of elements in the array: \n");
//     scanf("%d", &n);
//     int arr[n];
//     int revarr[n];

//     // printf("Here");
//     printf("Enter the elements present in the array: \n");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Here");

//     //reversing the array using pointers
//     reverseArray(arr, &revarr[0],n);

//     //Now we print it
//     printf("The array after sorting is: \n");
//     // printArray(&revarr, n);
//     for(int i=0; i<n ; i++){
//         printf("%d",revarr);
//     }


//     return 0;

// }














