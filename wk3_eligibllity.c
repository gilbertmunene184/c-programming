#include <stdio.h>

int main () {
	float marks;//%f
	float attendance;//%f
	
	printf("enter your marks \t");
	scanf("%f",&marks);
	
	printf("enter your attendance %% \t");
	scanf("%f",&attendance);
	
	if(attendance >=75 && marks >=40 ){
		printf("elligible ");
		
	}
	else{
		printf("not elligible");
	}
	
	return 0;
}
