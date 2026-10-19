#include <stdio.h>
#define pi 3.142

int main() {
	float radius,height;
	float volume,surfacearea;
	//prompt user
	printf("enter radius of the cylinder \t");
	scanf("%f",&radius);
	
	printf("enter the height of the cylinder \t");
	scanf("%f",&height);
	
	volume=pi * radius *radius *height;
	surfacearea=2 *pi*radius*radius+2*pi*radius*height;
	
	printf("the cylinder results are \n");
	printf("the value of radius is %.2f \n",radius);
	printf("the value of height is %.2f \n",height);
	printf("the value of volume is %.2f \n",volume);
	printf("the surfacearea is %.2f \n",surfacearea);
	
	return 0;
	
}
