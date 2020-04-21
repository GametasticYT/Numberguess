#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define clear() printf("\033[H\033[J")

int main()
{
	int i, n;
	time_t t;
	n = 5;
	int high_input;
	int win = 0;
	int rand_num;
	int guess;
	
	srand((unsigned) time(&t));
	printf("Number guessing game!\n");
	printf("\n");
	printf("Highest number: ");
	scanf("%d", &high_input);
	rand_num = (rand() % high_input); 
	clear();
	
	while (win == 0)
	{
		printf("Guess: ");
		scanf("%d", &guess);
		if(guess > rand_num)
		{
			printf("Your guess is too high!\n");
		}
		if(guess < rand_num)
		{
			printf("Your guess is too low!\n");
		}
		if(guess == rand_num)
		{
			printf("Your guess is right! Congratulations!\n");
			win = 1;
		}
	}	
	
	return 0;
}
