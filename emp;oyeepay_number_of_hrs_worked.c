//GILBERT MUNENE
//CT100/G/30730/26


//work payment program
#include <stdio.h>
//function prototype
float calculatesalary(float number_of_hours_worked,float hourly_wage);

int main () {
	float number_of_hours_worked,hourly_wage,weekly_salary;
	
	printf("enter the hours worked \t");
	scanf("%f",& number_of_hours_worked );
	
	printf("enter the hourly wage \t");
	scanf("%f",& hourly_wage);
	
	//function call
	weekly_salary= calculatesalary( number_of_hours_worked, hourly_wage);
	
	printf("the company is paying in accordance to the number of hours worked \n");
	printf("the employee weekly salary is %.2f \n",weekly_salary);
	
	
	
	return 0;
}
//function definition
float calculatesalary(float number_of_hours_worked,float hourly_wage) {
	float weekly_salary;
	weekly_salary=number_of_hours_worked * hourly_wage;
	
	return weekly_salary; 
	
}