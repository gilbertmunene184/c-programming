#include <stdio.h>

int main () {
	float annual_income;//%f
	int age;//%d
	
	printf("enter your age \t");
	scanf("%d",&age);
	
	printf("enter your annual_income \t");
	scanf("%f",&annual_income);
	
	if(annual_income >=21000 && age >=22){
		printf("congratulation you qualify for loan");
	}
	else{
		printf("unfortunately,we are unable to offer you loan at this time");
	}
	return 0;
	  
}