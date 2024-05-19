/*E38_q2
Write a C program to remove a number in the array from a 
given position*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void printArr(int a[],int l){
    for(int i=0; i<l ; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){

    int n;
    printf("Enter num of element in arr\n");
    scanf("%d",&n);

    int nums[n];
    printf("Enter arr elements\n");
    for(int i=0; i<n ; i++){
        scanf("%d",&nums[i]);
    }
    
    int pos;
    printf("Enter the pos to remove\n");
    scanf("%d",&pos);


    // //Approach 1
    // int arr[n-1];
    // int j=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(i==pos){
    //         continue;
    //     }
    //     arr[j] = nums[i];
    //     j++;
    // }

    //Approach 2 : 
    for(int i=pos; i<n; i++){
        nums[i] = nums[i+1];
    }
    printf("The new arr is:\n");
    printArr(nums,n-1);

    return 0;
}






