//GILBERT MUNENE
//CT100/G/30730/26
//WHILE LOOP

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
int secret,guess,attempts=0;
srand(time(0));
secret=(rand () % 20) +1;

printf("i have picked a number 1 and 20.try to guess it! \n");

//keep asking untill guess is correct
while (1) {
	printf("enter your guess \t");
	scanf("%d",&guess);
	attempts ++;
	
	if (guess>secret) {
		printf("too high! \n");
	}
	else if (guess<secret){
		printf("too low! \n");
	}
	else {
		printf("congratulations!\n");
		printf("you guessed it in %d attempts. \n",attempts);
		break;//to exit the loop
	}
	
}	
	
	return 0;
}