/*E25 
Write a structure to store the names, salary, and hours of 
work  per  day  of  10  employees  in  a  company.  Write  a 
program to increase the salary depending on the number 
FY-PSAP LAB EXAM               AY:2023-24            SEM-I               
 
of  hours  of  work  per  day  as  follows  and  then  print  the 
name of all the employees along with their final salaries. 
Assume: 
 
Test Cases: Input 
A   40000   8 
B   10000  10 
C   60000  14 
Output: 
A   44000   8 
B   18000  10 
C   72000  12*/

#include <stdio.h>

#define NUM_EMPLOYEES 2

// Define the structure to store employee details
struct Employee {
    char name[50];
    int salary;
    int hoursOfWorkPerDay;
};

// Function to increase the salary based on hours of work per day
void increaseSalary(struct Employee *emp) {
    if (emp->hoursOfWorkPerDay >= 12) {
        emp->salary += 15000;
    } else if (emp->hoursOfWorkPerDay >= 10) {
        emp->salary += 8000;
    } else if (emp->hoursOfWorkPerDay >= 8) {
        emp->salary += 4000;
    }
}

int main() {
    struct Employee employees[NUM_EMPLOYEES];

    // Input details for employees
    printf("Enter the details of %d employees (Name Salary HoursOfWorkPerDay):\n", NUM_EMPLOYEES);
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Employee %d: ", i + 1);
        scanf("%s %d %d", employees[i].name, &employees[i].salary, &employees[i].hoursOfWorkPerDay);
    }

    // Increase salary based on hours of work
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        increaseSalary(&employees[i]);
    }

    // Print the final details of employees
    printf("\nName\tSalary\tHoursOfWorkPerDay\n");
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("%s\t%d\t%d\n", employees[i].name, employees[i].salary, employees[i].hoursOfWorkPerDay);
    }

    return 0;
}
// Explanation:
// This program demonstrates the use of structures in C to store the details of employees in a company. The structure Employee is defined with three members: name, salary, and hoursOfWorkPerDay. The program then reads the details of 10 employees and stores them in an array of Employee structures.

