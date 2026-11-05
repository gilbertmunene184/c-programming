//1d array
#include <stdio.h>

int main () {
	int i;
	float total=0;
	float revenue[7];
	float average;
	
	//input of the revenue
	for(i=0;i<7;i++){
		printf("enter the revenue of  day %d \t",i+1);
		scanf("%f",&revenue[i]);
		total=total + revenue [i];
	}
	//calculate average
	average = total/7;
	printf("total weekly revenue: %.2f ksh\n",total);
	printf("aaverage daily revenue:%.2f ksh\n",average);
	return 0;
}