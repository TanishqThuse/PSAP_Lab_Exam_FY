/*E38 
1. Write a C program to insert a given number in the array at given 
position*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

    int n, pos;
    printf("Enter the number of elements in the array: \n");
    scanf("%d",&n);

    if(n>100){
        printf("Array size exceeded\n");
        exit(0);
    }
    int nums[100];
    printf("ENter array elements\n");
    for(int i=0; i<n; i++){
        scanf(" %d",&nums[i]);
    }

    printf("Enter the number to be inserted: \n");
    int num;
    scanf("%d",&num);
    printf("Enter the pos to be placed at:\n");
    scanf("%d",&pos);

    for(int i=0; i<n;i++){
        if(i==pos){
            int j;
            for( j=n; j>pos;j--){
                nums[j]=nums[j-1];
                // if(j==pos){
                //     nums[j]=num;
                // }
            }
            nums[j] = num;
            
        }
    }
    printf("New arrays is :\n");
    for(int i=0; i<n+1; i++){
        printf("%d ",nums[i]);
    }
    printf("\n");



    return 0;
}