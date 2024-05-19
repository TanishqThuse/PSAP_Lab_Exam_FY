/*E42
Write a C program for sorting list of elements using selection sort*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printArray(int num[],int l){
    for(int i=0; i<(l);i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

int main(){

    int n;
    printf("Enter elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Before sorting : ");
    printArray(arr,n);


    int min_index ;
    for(int i=0; i<n; i++){
        min_index = i;
        //to find the most min
        for(int j=i; j<n ; j++){
            if(arr[min_index]>arr[j]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
        }
    
    printf("After sorting : ");
    printArray(arr,n);
    return 0;

    
    }
    