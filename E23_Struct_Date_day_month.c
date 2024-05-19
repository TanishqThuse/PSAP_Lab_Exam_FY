/*E23
Create  a  structure  named  Date  having  day,  month 
and year as its elements.  
Store the current date in the structure. Now add 45 
days to the current date and display the final date. 
 
 
Test Cases: 
Input : dd mm yy (e.g 6 /3/23) 
Output:  dd/mm/yy (20/4/23)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Date{
    int day;
    int month; 
    int year;
};

This question is very complicated for me to solve simply


int main(){

    struct Date D1;
    struct Date D2;

    char M_31[] = { "Jan", "Mar", "May", "Jul", "Aug", "Oct", "Dec"};
    //                  1   3       5       7      8        10  12

    char M_30 = { "Apr" , "Jun", "Sep", "Nov"};
            //      4       6       9       11

    //feb has 28, in leap year 29 days


    printf("Enter day,month and year\n");


    return 0;
}