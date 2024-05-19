/*E45 
Write a C program to insert element in an array on given specific 
position*/

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

    int n=11;
    int arr[100] = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Original Array\n");
    printArray(arr,n);

    printf("Enter the element to insert\n");
    int insert;
    scanf("%d",&insert);

    printf("Enter the position to insert\n");
    int pos;
    scanf("%d",&pos);

    int i;
    for( i=n;i>pos ; i--){
        arr[i] = arr[i-1]; 
    }
    arr[i] = insert;

    printf("After insertion\n");
    printArray(arr,n+1);

    return 0;
}