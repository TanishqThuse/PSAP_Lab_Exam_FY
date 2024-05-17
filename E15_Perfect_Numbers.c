/*E15
Write a function to print all perfect numbers in a 
given interval in C programming. 
 
NOTE : A perfect no. is one who sum of divisors is number itself

Test Cases:1)  Enter lower limit to print perfect  numbers:1 
Enter Upper limit to print perfect  numbers:10000 
All perfect numbers between 1 to 10000 are: 
6,28,496,8128 

2) Enter lower limit to print perfect numbers: 23 
Enter upper limit to print perfect numbers: 450 
All perfect numbers between 23 to 450 are: 
28 

3) Enter lower limit to print perfect numbers: 15 
Enter upper limit to print perfect numbers: 70 
All perfect numbers between 15 to 70 are: 28*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

//-1-> not perfect , 1-> perfect
int isPerfect(int num){
    int num2 = num;
    int sum=0;
    // int digit;
    //i want n's divisors
    for(int j=1; j<num; j++)
    {
        if(num%j == 0){
            sum+= j;
        }
    }   

    if(sum == num2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    // int num;
    int start;
    int end;

    //tsak innput
    // printf("Enter num\n");
    // scanf("%d",&num);

    printf("Enter start\n");
    scanf("%d",&start);

    printf("Enter end\n");
    scanf("%d",&end);

    //code to check perfect numbers
    for(int i=start; i<=end; i++){
        if(isPerfect(i)==1){
            printf("%d ",i);
        }
    }



    return 0;
}










