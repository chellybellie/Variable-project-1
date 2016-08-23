#include <iostream>

int main()
{
	int varA = 0, varB = 0, varC = 0; 
	//printf("var currently stores %d \n", var);
	printf("insert two integers: "); // prompt user
	scanf_s("%d %d", &varA, &varB); // assign var a value from console
	getchar();
	printf("A: %d, B %d \n", varA, varB);

	int tswap = varA;
	varC = varA;
	varA = varB;
	varB = varC;

	printf("swap successsful! (well, probably)\n");
	printf("A: %d, B: %d \n", varA, varB);
	getchar(); // prevent program from closing


	