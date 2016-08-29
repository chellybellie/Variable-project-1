// find the value of each of the following expressions
	//a) 2/3 + 3/5 = 0 + 0 = 0
	//b) 2%3 + 3%5 = 2 + 3 = 5
	//c) 23%15%-2 = 0
	//d) 25 * 1/2 = 12
	//e) 25 * 1.0/2 = 0
	//f) 25* (1/2) = 0
	//g) 235 / 8+7 = 36
	//h) 235 / 8.0+7 = 0
	//I) ((20+1)/2-2.0)/23+3)*0.2 = 0.061538
//select suitable variable names you might use for:
	//  avarage height of students: int Avrage = 'x'
	// tax rate for income above $65000 = > $65000
	// tax rate for incomes below $65000 = < $65000
	// total cost of all games on steam libary = int steamcost = 'x' amount
// select suitable data types to hold the following values 
	// 121 = char
	// 9.4 = float
	// r = char
	// 100000 = int
	// false = bool 

#include <iostream>



int main()
{
	printf("hello world \n");	

	// variable Definition
		// i am askin the comoputer for more memory
		// this memory wilkl be used for integer math
		// i have given this variable the alias 'var'
	float var; //var is uninitialized

	// Variable assignment
		// i am using the literal calue '12'
		// and assigning into my variable
		// first assignment is an initialization
	var = 12.5;

	// variable instation
		// when you define and initializw at the same time
	int ivar = var + 4;


	// pringf is a special snowflake
	// its inner working are quite complex
		//you can add any number of values/variables with commas
		// when pringt hits % it will look print the first satisfying value

	printf(" %f %d \n" , var, ivar);
	printf("%f", (((20 + 1) / 2- 2.0) / (23 + 3) * 0.2));


	getchar();

	int i = 0;
	float f = 0;
	char ch = 'a';
	scanf_s("%i %c %f", &i, &ch, 1, &f);
	getchar(); // clear hanging new line
	printf("%i %c %f", i, ch, f);
	getchar(); //pause the program



}	
