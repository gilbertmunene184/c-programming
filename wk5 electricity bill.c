#include <stdio.h>
//function prototype
float calculatebill(float number_of_units_consumed);
int main () {
	float bill, number_of_units_consumed,result;
	printf("enter thefloat number_of_units_consumed \t ");
	scanf("%f",&number_of_units_consumed);
	//function call
	result=calculatebill(number_of_units_consumed);
	printf("the number of units consumed is %.2f \n", number_of_units_consumed );
	printf("the bill is %.2f \n",result);
	return 0;
}
//function definition
float calculatebill(float number_of_units_consumed){
	float bill;
	if( number_of_units_consumed <=100 ){
		bill=number_of_units_consumed * 10;
	}
	else if (number_of_units_consumed >=100 &&number_of_units_consumed <=200){
		bill=10*100 + (number_of_units_consumed -100)*15;
	}
	else if ( number_of_units_consumed >200){
		bill=10*100+15*100+( number_of_units_consumed-200)*20;
	}
	return bill;
}

