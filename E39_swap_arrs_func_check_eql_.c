/*E39 
Write  a  c  program  for  swapping  of  two  arrays  using  function  and 
check  if  both  arrays  are  equal  or  not.  Limits  and  numbers  of  both 
arrays must be accepted from user at run time*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void printArray(int a[], int l){
    for(int i=0; i<l; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void swapArray(int *a, int *b, int l){
    int temp;
    for(int i=0; i<l/2; i++){
        temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b++;
    }
}

void checkEqual(int a[], int b[], int l){
    int flag= 0;
    for(int i=0; i<l ; i++){
        if(a[i]!=b[i]){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Arrays are same\n");
    }
    else{
        printf("Arrays are not same\n");
    }
}

int main(){
    int limit; 
    printf("Enter limit\n");
    scanf("%d",&limit);
    int a[limit], b[limit];
    for(int i=0; i<2; i++){
        printf("Enter the elements for array %d : ",i+1);
        for(int j=0; j<limit; j++){
            if(i==0){
                scanf("%d",&a[j]);
            }
            else{
                scanf("%d",&b[j]);
            }
        }
    }

    printf("Before swapping : \n");
    printf("a = ");
    printArray(a,limit);
    printf("b = ");
    printArray(b,limit);

    swapArray(&a[0],&b[0],limit);

    printf("After swapping : \n");
    printf("a = "); printArray(a,limit);
    printf("b = "); printArray(b,limit);

    return 0;
}