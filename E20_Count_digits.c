/*E20
Write a C program to count the number of digits in 
an integer. Then print addition of all digits in the 
given number. */

#include<stdio.h>

int countDigits(int num)
{   
    int c=0;
    while(num>0){
        c++;
        num = num/10;
    }
    return c;
}

int sumOfDigits(int num, int digits){
    int sum = 0;
    int num2 = num;
    while(num>0){
        int n = num%10;
        sum += n;
        num = num/10;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);

    //calculate number of digits
    int digits = countDigits(num);
    printf("The number of digits = %d\n",digits);

    //calculate sum of digits
    int sum = sumOfDigits(num,digits);
    printf("The sum of digits = %d\n", sum);
}