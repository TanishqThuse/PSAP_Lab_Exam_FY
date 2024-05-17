/*E06
Accept limit of array from user. As per the limit, read integer elements in
array. Then print :
1. Minimum, Maximum number from array.
2. Search for a particular number from array.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


//Declaration
int minimum(int nums[], int l);
int maximum(int nums[], int l);
int searchInArray(int nums[], int l, int search);

//Defination
int minimum(int nums[], int l){
    int min = nums[0];
    for(int i=0;i<l;i++){
        if(min > nums[i]){
            min = nums[i];
        }
    }
    return min;
}

int maximum(int nums[], int l){
    int max = nums[0];
    for(int i=0;i<l;i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }
    return max;
}

int searchInArray(int nums[], int l, int search){
    int index = -1; // by default we assume no
    for(int i=0; i<l; i++){
        if(nums[i] == search){
            index = i;
        }
    }

    if(index == -1){
        printf("Element %d not present in array\n",search);
    }
    else{
        printf("Element %d present at index %d \n", search,index);
    }
    return index;
}

int main(){
    int limit;

    //We take limit from user
    printf("Enter limit for the array : \n");
    scanf("%d",&limit);
    int nums[limit];

    //We take nums from user
    printf("Enter %d integers in the array : \n",limit);
    for(int i=0; i<limit; i++){
        scanf("%d",&nums[i]);
        // fflush(stdin);
    }

    //1) to find Minimum, Maximum number from array
    printf("The minimum number is : %d\n",minimum(nums,limit));
    printf("The maximum number is : %d\n",maximum(nums,limit));

    //Q2) Search for a particular number from array.
    printf("Enter for a particular number to search : " );
    int search ;
    scanf("%d",&search);
    searchInArray(nums,limit,search);


    return 0;
}