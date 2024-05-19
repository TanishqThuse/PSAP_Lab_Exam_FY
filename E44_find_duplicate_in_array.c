/*E44 
Write a C program to find duplicate element in an array*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n;
    printf("Give size of arraay\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int flag = 0;
    int temp ;
    for(int i=0 ; i<n ;i++){
        temp = arr[i];
        for(int j=0; j<n; j++){
            if(arr[j]==temp && i!=j && i<j){
                flag = 1;
                printf("Duplicate element found at %d and %d , num = %d\n",i,j,temp);
                
                break;
            }
        }
    }
    if(flag==0){
        printf("No duplicate element found\n");
    }

    return 0;
}