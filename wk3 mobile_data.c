//GILBERT MUNENE
//CT100/G/30730/26
#include <stdio.h.>
int main () {
	int choice;
	
	printf ("select data bundle: \n");
	printf("1.100MB @ 50 KES \n");
	printf("2.500MB @200 KES \n");
	printf("3.1GB @350 KES \n");
	printf("4.2GB @600 KES \n");
	
	printf("enter the choice (1-4) \t");
	scanf("%d",&choice);
	
	switch(choice) {
		case 1:
		printf("you select 100MB. cost=50 KES");
		break;
		case 2:
		printf("you select 500MB. cost=200 KES");
		break;
		case 3:
		printf("you select 1GB. cost=350 KES");
		break;
		case 4:
		printf("you select 2GB. cost=50 KES");
		break;
		default:
		printf("invalid choice");
		break;
	}
	return 0;
	
}
