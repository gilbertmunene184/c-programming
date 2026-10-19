#include <stdio.h>

//function prototype

float calculatefare(float distance);
int main () {
	float distance,result;
	
	printf("enter the distance travelled \t");
	scanf("%f",&distance);
	
	//function call
	result=calculatefare(distance);
	
	printf("the distane travelled is %.2f km \n",distance);
	printf("the total fare is %.2f ksh \n",result);
	return 0;
}
//function definition

float calculatefare(float distance){
	float fare;
	fare=distance *50;
	return fare;
}

