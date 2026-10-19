#include <stdio.h>

float converttocelsius(float fahrenheit);

int main () {
	
	float result,fahrenheit;
	
	printf("enter the temperature in fahrenheit \t");
	scanf("%f",&fahrenheit);
	
	//function call
	result=converttocelsius(fahrenheit);
	printf("the temperature in celsius is %.2f c\n ",result);
	
	return 0;
	
}
float converttocelsius(float fahrenheit){
	return(fahrenheit-32)*5/9;
}
