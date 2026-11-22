//GILBERT MUNENE
//CT100/G/30730/26
//while loop
#include <stdio.h>

int main () { 
double balance,withdraw;

printf("enter the starting balance \t");
scanf("%lf",&balance);

//keep allowing withdrawals as long as balance  >0
while (balance >0){ 

printf("current balance: %.2f \n",balance);

printf("enter the amount to withdrraw: \t");
scanf("%lf",&withdraw);

balance=balance-withdraw;

printf("balance after withdrawal:%.2f \n",balance);
}

return 0;


}