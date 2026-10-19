#include <stdio.h>

int main () {
	float units,bill;
	
	printf("enter the number of water units consumed: \t");
	scanf("%f",&units);
	
	if(units <=30){
		bill=units * 20;
	}
	else if(units >30 && units <=60){
		bill=30*20 + (units-30)*25;
		
	}
	else if(units >60){
		bill=30*20+30*25+(units-60)*30;
	}
	printf("the total water bill is: %.2f KES",bill);
	return 0;
	
	
}

