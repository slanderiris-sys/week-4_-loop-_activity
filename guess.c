// loop

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

 int main (){
	int guess;
	int secret;
	int attempts=0;
	srand(time(0));
	
	
	secret=7;
	printf("Guess a number between 1 and 20: ");
	scanf("%d" , &guess);
	attempts++;
	
	while (guess!=secret) {

		
	}
	
	if(guess>secret){
		printf("Too high!!\n");
		
	}
	else if (guess <secret){
		printf("Too low!!\n");
		
	}
	printf("guess again: ");
	scanf("%d" ,&guess);
	attempts++;
	
	printf("Congratulations!!\n");
	printf("Total attempts :%d\n" ,attempts);
	
	return 0;
	
}