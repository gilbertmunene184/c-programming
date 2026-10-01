#include <stdio.h>
//function prototype
float calculatebill(float number_of_units_consumed);
int main () {
	float units_consumed,bill;
	printf("enter the number_of_units_consumed \t");
	scanf("%f",&units_consumed);
	bill=calculatebill(units_consumed);//function call
	printf("units consumed:%.2f \n",units_consumed);
	printf("total bill: ksh %.2f \n",bill);
	
}
//function definition
float calculatebill(float number_of_units_consumed){
	float bill;
	if(number_of_units_consumed<=100){
		bill=10*number_of_units_consumed;
	}
	else if (number_of_units_consumed<=200){
		bill=(100*10)+(number_of_units_consumed-100)*15;
	}
	else if(number_of_units_consumed>200){
		bill=(100*10)+(100*15)+(number_of_units_consumed-200)*20;
	}
	return bill;
}
