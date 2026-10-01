#include <stdio.h>
//function prototype

float calculatetax (float gross_salary);
int main () {
	float gross_salary,result,net_salary;
	printf("enter the employee gross_salary \t");
	scanf("%f",&gross_salary);
	
	//function call
	
	result= calculatetax(gross_salary);
	net_salary=gross_salary-result;
	
	printf("gross_salary : ksh %.2f \n",gross_salary);
	printf("calculate_tax : ksh %.2f \n",result);
	printf("net_salary : ksh %.2f \n",net_salary);
	
	return 0;
	
}
//function definition
float calculatetax (float gross_salary){
	float tax;
	if (gross_salary <30000){
		tax=0.05*gross_salary;
	}
	else if(gross_salary >=30000 && gross_salary <=59999){
		tax=0.1*gross_salary;
	}
	else if(gross_salary >60000){
		tax=0.15*gross_salary;
	}
	return tax;
	
}
