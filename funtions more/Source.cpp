#include <iostream>
#include <cstdlib>
#include <time.h>

bool GameOver = false;

int main()
{
	while (GameOver == false)
	{
		printf(" Please choose a number between 1 and 3: /n Rock: 1 /n Paper: 2 /n scissors 3");
		scanf_s(" %d", &Hand);

	}
}


int computerhandhand()
	{
		srand(time(0));
		int computerhand = rand() % (4 - 1) + 1;
	}

int Hand()
{
	if (Hand == 1)
	{
		if (computerhand == 1)
			printf("Tied! try again");
		GameOver = false;

			if (computerhand == 2)
				printf(" You Win!");
			GameOver = true;

			if (computerhand == 3)
				printf("You Loose!");
			GameOver = true;
	}
if(hand == 2)
	{
			if (computerhand == 1)
			printf("You Lose!");
			GameOver = true;

			if (computerhandhand == 2)
			printf("Tied! Try Again");
			GameOver = false;

			if (computerhandhand = 3)
			printf("You Win!");
			GameOver = true;
	}
if (hand == 3)
{
	if (computerhandhand == 1)
		printf("You Lose!");
	GameOver = true;

	if (computerhandhand == 2)
		printf(" You Win!");
	GameOver = true;

	if (computerhandhand == 3)
		printf("Tied! Try again");
	GameOver = false;
}
	
		


}
	
