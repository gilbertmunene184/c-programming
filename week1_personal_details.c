//variables and data variables
//gilbert munene
//CT100/G/30730/26
#include <stdio.h>

int main () {
	int phonenumber;//%d
	float height;//%f
	double bankbalance;//%lf
	
	printf("enter your phone number \t");
	scanf("%d",&phonenumber);
	
	printf("enter your height \t");
	scanf("%f",&height);
	
	printf("enter your bankbalance \t");
	scanf("%lf",&bankbalance);
	
	printf("the phonenumber is %d \n",phonenumber);
	printf("the height is %f \n",height);
	printf("the bank balance is %lf \n",bankbalance);
	
	return 0;//execution successfull
}
