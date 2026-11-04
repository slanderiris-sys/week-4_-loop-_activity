//do while loop

#include<stdio.h>

int main (){
	int password;
	
	do {
		printf("Enter password: ");
		scanf("%d" , &password);
		
		if (password !=1234){
			printf("wrong password ,try again \n");
			
		}
	}	while (password !=1234);
		
		printf("Access granted \n");
	
	return 0;
}