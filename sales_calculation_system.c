//GILBERT MUNENE
//CT100/G/30730/26


//sales calculation system
#include <stdio.h>

//function prototype
float calculatesubtotal(float product1,float product2, float product3,float product4,float product5  );
float calculatediscount(float subtotal);
float calculatefinalamount(float subtotal,float discount);


int main () {
	float subtotal, total_cost,discount,final_amount_payable_bythe_customer,product1,product2,product3,product4,product5;
	printf("enter the prices of the prices of five products \t");
	scanf("%f%f%f%f%f",&product1, &product2, &product3, &product4, &product5 );
	
	//function call
	subtotal=calculatesubtotal(product1,product2,  product3, product4, product5  );
	discount=calculatediscount(subtotal);
	final_amount_payable_bythe_customer=calculatefinalamount(subtotal,discount);
	//PRINTING OF values
	printf("\nsubtotal: %.2f",subtotal);
	printf("\ndiscount amount:%.2f",discount);
	printf("\nfinal amount payable :%.2f",final_amount_payable_bythe_customer );
	
	
	
	return 0;
}
//function definition
float calculatesubtotal(float product1,float product2, float product3,float product4,float product5  ) {
	float total_cost;
	total_cost=product1+product2+product3 +product4 +product5;
	
	
	return total_cost;
	
}
//function definition
float calculatediscount(float subtotal){
	float discount;
	
	if(subtotal >=10000){
		discount=subtotal*0.1;
	}
	else if( subtotal>5000 && subtotal <=9999 ){
		discount=subtotal*0.05;
	}
	else{
		discount=0;
	}
	return discount;
}
//function prototype
float calculatefinalamount(float subtotal,float discount){
float final_amount_payable_bythe_customer;
final_amount_payable_bythe_customer=subtotal-discount;

	
	return final_amount_payable_bythe_customer;
}




	
