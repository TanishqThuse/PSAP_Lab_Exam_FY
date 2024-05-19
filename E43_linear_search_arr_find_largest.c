/*E43 
Write a C program to search element in given list using linear 
search . also find largest element in given arra
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int arr[] = {8,3,6,8,3,9,0,4,6,7,1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int search;
    printf("Enter the element to search\n");
    scanf("%d",&search);

    int max = arr[0];
    int flag =0;
    for(int i=0; i<n; i++){
        if(arr[i]==search){
            printf("Element found at pos %d\n",i);
            flag++;
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    if(flag == 0){
        printf("Element not found\n");
    }
    printf("The largest element in the array is %d\n",max);
}