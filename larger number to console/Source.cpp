#include <iostream>

int main()
{
	int varA = 0, varB = 0;
	// instructions
	printf("This program will print the largest of two number to the screen.\n");
	//prompt
	printf("insert two integers separated by a space and press enter: "); 
	scanf_s("%d %d", &varA, &varB);
	getchar();

	if (varA < varB) //swap to make sure A is always larger
	{
		int tswap = varA;
		varA = varB;
		varB = tswap;
	}

	printf("%d >= %d", varA, varB); // output result
	getchar();

}