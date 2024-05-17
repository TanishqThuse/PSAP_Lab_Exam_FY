/*E11
Write a C program to print Fibonacci series up to n 
terms. 
FY-PSAP LAB EXAM               AY:2023-24            SEM-I               
 
 
Test Cases: No. of terms 10 
Output: 0,1,1,2,3,5,8,13,21,34*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declaration
void fib(int );

//Defination
void fib(int n){

    // 0,1,1,2,3,5,8,13,21,34 
    int first = 0 ;
    int second = 1;
    int next;
    for(int i=0; i<n; i++)
    {   
        printf("%d ",first);
        next = first + second;
        first = second;
        second = next;
        
    }
    printf("\n");
}



int main(){
    int n;
    //Taking input of terms
    printf("Enter the number of terms \n");
    scanf("%d", &n);

    //using recursion
    printf("The fibonnaci series is : \n");
    fib(n);
 
    return 0;
}









