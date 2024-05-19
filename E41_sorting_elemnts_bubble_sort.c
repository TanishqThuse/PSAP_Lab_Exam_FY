/*E41 
Write a C program for sorting list of elements using bubble sort*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void printArray(int num[],int l){
    for(int i=0; i<(l);i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

// char bubbleSort(int num[], int l){
//     for(int i=0; i<l ; i++){
//         for(int j=i; j<l-1 ; j++){
//             if(num[i]>num[j]){
//                 int temp = num[i];
//                 num[i] = num[j];
//                 num[j] = num[i];
//             }
//         }
//     }
//     return num[l];
// }

int main(){
    int limit;
    printf("Enter number of elements\n");
    scanf("%d",&limit);
    int nums[limit];

    printf("ENter elements array (unosrted)\n");
    for(int i=0; i<limit; i++){
        scanf("%d",&nums[i]);
    }

    printf("Before sorting : ");
    printArray(nums,limit);

    int l= limit;
    // bubblesort(&nums[0], sizeof(nums)/sizeof(int))
  
    //a bit more like selection sort
    // for(int i=0; i<l ; i++){
    //     for(int j=i; j<l ; j++){
    //         if(nums[i]>nums[j]){
    //             int temp = nums[i];
    //             nums[i] = nums[j];
    //             nums[j] = temp;
    //         }

    //Proper bubble sort
    for(int i=0; i<l-1 ; i++){
        for(int j=i; j<l-i-1 ; j++){
            if(nums[i]>nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            // if(){

            // }
        }
    }
    printf("After sorting : ");
    printArray(nums,l);

}

