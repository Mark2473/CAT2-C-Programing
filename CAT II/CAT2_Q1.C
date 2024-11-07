#include <stdio.h>

/*
Author :John Makau Hellen
Reg NO:CT102/G/24730/24
Date: 2024/11/7
*/

//Define the structure 

struct employee{

char name[25];

int id;

char department[20];

float salary;

char email[50];

};

int main () {

//Declare and initialize the structure variable 

struct employee emp = {

''John Doe'',

12345,

''Human Resource'',

55000.50,

''john.doe@company.com'' };

//print the details 

printf(''Name: %s\n'',emp.name);

printf(''ID: %d\n'' , emp.id);

printf(''Department: %s\n'',emp.department);

printf(''Salary: %.2f\n'', emp.salary);

printf(''Email: %s\n'', emp.email);

return 0;

 }