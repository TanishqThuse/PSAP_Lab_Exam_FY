/*E19
Write a c program for swapping of two arrays using 
call by value function. */

#include<stdio.h>
#include<string.h>


void printArrays(int n1[],int n[]){
    printf("Array a = : ");
    for(int i = 0; i<3; i++)
    {
        printf("%d", n1[i]);
    }
    printf("\n");
    printf("Array b = : ");
    for(int i = 0; i<3; i++)
    {
        printf("%d", n[i]);
    }
    printf("\n");
}

void swayArrays(int a[],  int b[]){
    for(int i=0; i<3; i++){
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp; 
    }
    printf("After swapping a and b\n");
    printArrays(a,b);
}



int main(){
    int a[] = {1,2,3};
    int b[] = {4,5,6};

    printf("Before swapping : \n");
    printArrays(a,b);

    swayArrays(a,b);

    return 0;
}