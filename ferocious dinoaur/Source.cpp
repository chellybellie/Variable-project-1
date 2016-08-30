#include <iostream>


struct Dinosaur
{
	char name[80];
	int health;
	char size[80];
	int claws;
	int teeth;
	int agressive;
	int gentle;

};
Dinosaur CreateChar()
{
	Dinosaur one;
	one.health = 100;

	printf("please input your Dinosaur name here \n");
	scanf_s("%s", one.name, 80);
	getchar();

	printf("please select %s's size comparison \n", one.name);
	scanf_s("%s", one.size, 80);
	getchar();

	printf("please input how much teeth %s's has \n", one.name);
	scanf_s("%d", &one.teeth);
	getchar();
	
	printf("please input how many claws your dinosaur has here \n");
	scanf_s("%d", &one.claws);
	getchar();

	printf("How agressive is your dinosaur? \n ");
	scanf_s("%d", &one.agressive);
	getchar();

	printf("How gentle is your dinosaur? \n");
	scanf_s("%d", &one.gentle);
	getchar();

	return one;
	
}

void printchar(Dinosaur one)
{
	printf("\n \n Your Dinosaur name is %s \n", one.name);
	printf("with the Agressive rating of: %d \n", one.agressive);
	printf("but has a gentle rating of: %d \n", one.gentle);
	printf("that is the size of a %s \n", one.size);
	printf("with %d  teeth \n", one.teeth);
	printf("and %d claws \n", one.claws);

	if (one.gentle > one.agressive)
	{
		printf("How sweet, but lets change that!...\n");
		system("pause");

	}
	else 
	{
		printf("BadAss!. Lets do this!\n \n");
	}
}

void modifychar(Dinosaur &one)
{
	if (one.gentle > one.agressive)
	{
		one.teeth += 47;
		one.claws += 12;

	int tswap = one.gentle;
	one.gentle = one.agressive;
	one.agressive = tswap;
	}
	
}

void main()
{

	Dinosaur one;
	one.health = 100;
	printf(" Create Account \n");

	one = CreateChar();

	getchar();

	printf("Congratulations You have created your Awesome Dinosaur! \n");
	printchar(one);

	if (one.gentle > one.agressive)
	{
		modifychar(one);
		printchar(one);
	}

	getchar();
}