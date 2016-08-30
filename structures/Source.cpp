#include <iostream>

struct player
	{
	char name[80];
		int health;
		int score;
		int position;
		int velocity;
	};

void CreateChar()
{
	player one;
	one.health = 100;

	printf("please input your accout name here \n");
	scanf_s("%s", one.name, 80);
	getchar();

	printf("name is %s \n", one.name);
	printf("please inport your score \n");
	scanf_s("%d" , &one.score);
	getchar();

	printf("name is %s the Healer \n", one.name);
	printf("With the score of: %d \n", one.score);

	printf("Congratulations You have created your account! \n");
}

void main()
{
	player one;
	one.health = 100;
	printf(" Create Account \n");

	CreateChar();

	getchar();
	system("pause");
}

