//GILBERT MUNENE
//CT100/G/30730/26
//to calculate the cost of items purchased by customer
#include <stdio.h>
//function prototype
float calculatetotal (float price_of_one_item,float quantity_purchased);


int main () {
	float total_cost,result;
	float quantity_purchased; 
	 float price_of_one_item ;
	
	printf("enter the price of one item \t");
	scanf("%f",&price_of_one_item );
	
	//prompting the input of quantity purcchased
	printf("enter the quantity purchased \t");
	scanf("%f",&quantity_purchased);
	
	//function call
	result=calculatetotal(price_of_one_item,quantity_purchased);
	printf("THE TOTAL AMOUNT TO BE PAID IS:%.2f",result);
	
	
	
	
	return 0;
}
//function definition
float calculatetotal (float price_of_one_item,float quantity_purchased){
	float total_cost=price_of_one_item * quantity_purchased;
	return total_cost;
	
}