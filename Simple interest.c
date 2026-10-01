//gilbert munene
//CT100/G/30730/26
#include <stdio.h>

int main () {
	float simple_interest,time,rate,principal_amount;
	
	printf("enter the principal_amount \t");
	scanf("%f",&principal_amount);
	
	printf("enter the rate \t");
	scanf("%f",&rate);
	
	printf("enter the time \t");
	scanf("%f",&time);
	
	simple_interest=(principal_amount*time*rate)/100;
	
	printf("the simple_interest is %.2f",simple_interest);
	
	return 0;
}