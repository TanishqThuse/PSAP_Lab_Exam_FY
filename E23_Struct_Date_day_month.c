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

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust for leap year
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29;
        }
    }
    return daysInMonth[month - 1];
}

// Function to add days to a date
void addDays(struct Date *date, int daysToAdd) {
    date->day += daysToAdd;

    while (date->day > getDaysInMonth(date->month, date->year)) {
        date->day -= getDaysInMonth(date->month, date->year);
        date->month++;
        
        if (date->month > 12) {
            date->month = 1;
            date->year++;
        }
    }
}

int main() {
    struct Date currentDate;
    
    // Input the current date
    printf("Enter the current date (dd mm yy): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);
    
    int daysToAdd = 45;

    // Add days to the current date
    addDays(&currentDate, daysToAdd);

    // Output the final date
    printf("The final date after adding %d days is: %02d/%02d/%02d\n", 
           daysToAdd, currentDate.day, currentDate.month, currentDate.year);

    return 0;
}


// int main(){

//     struct Date D1;
//     struct Date D2;

//     char M_31[] = { "Jan", "Mar", "May", "Jul", "Aug", "Oct", "Dec"};
//     //                  1   3       5       7      8        10  12

//     char M_30 = { "Apr" , "Jun", "Sep", "Nov"};
//             //      4       6       9       11

//     //feb has 28, in leap year 29 days


//     printf("Enter day,month and year\n");


//     return 0;
// }