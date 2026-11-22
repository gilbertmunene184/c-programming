//GILBERT MUNENE
//CT100/G/30730/26
//DO WHILE LOOP

#include <stdio.h>

int main () {
	int password;
	
	do{
		printf("entter password to login: \t");
		scanf("%d",&password);
		
		if(password !=1234){
			printf("wrong password! try again \n");
	}
		}while (password !=1234);//keep asking until correct
		
		
		
		printf("access granted \n");
	return 0;	
}	
	
