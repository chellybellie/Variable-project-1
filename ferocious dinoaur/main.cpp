#include <iostream>
#include "Dinosaur.h"


void main()
{


	printf(" Create Account \n");
	getchar();

	const int array_size = 3;
	Dinosaur one[array_size];
	for (int i = 0; i < array_size; ++i)
	{
		one[i] = CreateChar();

		printchar(one[i]);
		if (one[i].gentle > one[i].agressive)
		{
			modifychar(one[i]);
			printchar(one[i]);
		}
	}
	


	printf("Congratulations You have created your Awesome Dinosaurs! \n");
	getchar();

	for (int i = 0; i < array_size; ++i)
		{
		 printchar(one[i]);
		}
	getchar();

}
