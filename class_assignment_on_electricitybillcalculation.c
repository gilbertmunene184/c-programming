//GILBERT MUNENE
//CT100/G/30730/26
//program to calculate monthly electricity bill
#include <stdio.h>
//function prototype
float calculateenergycharge(float number_of_units_consumed);
float calculatetotalbill(float energy_charge);

int main () {
	float energy_charge,number_of_units_consumed,tax,total_bill;
	printf("enter the units consumed \t");
	scanf("%f",&number_of_units_consumed);
	
	//function call
	energy_charge=calculateenergycharge( number_of_units_consumed);
	tax=calculatetotalbill( energy_charge);
	
	total_bill=energy_charge - tax;
	
	printf("==========electricity bill calculation \n");
	printf("the energy_charge is:%.2f \n",energy_charge);
	printf("the tax is:%.2f \n",tax);
	printf("the total_bill is:%.2f \n",total_bill);
	
	return 0;
}
//function definition
float calculateenergycharge(float number_of_units_consumed){
	float energy_charge;
	if(number_of_units_consumed <=50 ){
		energy_charge=number_of_units_consumed *10;
	}
	else if (number_of_units_consumed >50 && number_of_units_consumed <=100 ){
		energy_charge=50*10 +(number_of_units_consumed -50 )*15;
	}
	else{
		energy_charge=50*10 + 50*15 + (number_of_units_consumed-100 )*20;
	}
	return energy_charge;
}
//function definition 2
float calculatetotalbill(float energy_charge){
	float tax;
	tax=0.1 * energy_charge;
	return tax;
}

//advantages of using function
//1.functions make code readable
//2.functions reduces the size of the program
