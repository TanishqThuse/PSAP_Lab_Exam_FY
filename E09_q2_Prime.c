/*E09_2
To print priome number between two numbers given by user*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//Declaration
bool isPrime(int n);

//Defination
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0 && n!=2){
            return false;
        }
    }
    return true;
}

int main(){
    int upper, lower;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are : ", lower, upper);
    for(int i=lower+1; i<upper; i++){
        if(isPrime(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}









