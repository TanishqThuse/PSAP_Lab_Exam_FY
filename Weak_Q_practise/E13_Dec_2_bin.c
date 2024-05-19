#include<stdio.h>
#include<stdlib.h>

int main(){

    int n; 
    printf("Enter number\n");
    scanf("%d",&n);

    int rem;
    int bin[10];
    int i=0;
    while(n>0){
        rem = n%2;
        bin[i] = rem;
        n=n/2;
        i++; 
    }

    printf("The binary number is : ");
    for(int j=i-1; j>=0; j--){
        printf("%d ", bin[j]);
    }
    printf("\n");

    return 0;
}