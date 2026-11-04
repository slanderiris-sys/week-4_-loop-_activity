// while loop

#include <stdio.h>

 int main (){
	float balance=1000;
	float withdrawal;
	
	while (balance>0){ 
		printf("Enter amount to withdraw ");
		scanf("%f" , & withdrawal);
		
		balance=balance -withdrawal;
		
		printf("Remaining balance :%.2f\n", balance);
		
	}
	printf("account balance is zero or negative .");
	
	return 0;
}