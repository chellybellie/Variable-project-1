#include <iostream>

int main1()
{
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;
	//int num4 = 0;
	//int num5 = 0;

	// initializer list
	int numbers[5] = { 0, 0, 0, 0, 0 };

	//// initializer, condition, expression

	//// initializer: called once.
	//// condition is checked every loop.
	//// expression is executed at the end of the block.

	//int j = 1;
	////j = j + 1; // longest way
	////j += 1;

	//j = 3 + 2*j++; // 6
	//j = 3 + 2 * ++j; // 7

	////++j; // only increases by 1 - incrementation


	

	// input prompt
	printf("Input 5 values: ");


	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%d", &numbers[i]);
	}
	getchar();

	//   0   1   2    3   4
	// [45] [3] [2] [-1] [6]


	// gather input
	//scanf_s("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
	//getchar(); // throw away the newline character from carriage return

	for (int i = 5; i >= 0; --i)
	{
		printf("%d ", numbers[i]);
	}

	


	// print output
	//printf("%d %d \n",numbers[0], num2);

	getchar(); // pause the program
}



int main()
{
	int number[5] = { 0, 0, 0, 0, 0 };// create array " int number [5]"
									// give array its values " ={0, 0, 0, 0, 0}"
									// also known as intagers

		// give user prompt
	printf(" input 5 numbers");
	
	// now create loop for the array scan
	// the scanf_s function is the code reader 
		// in which the user feeds the program

	
	for (int i = 0;    i < 5;      ++i)
	//  (initializer; condition; expression)
	{

		// initializer: called once.-
			// -if condition is true then loop starts/moves to next step
		// condition: is checked every loop. defines how many loops there is
		// expression: is executed at the end of the block.-
				// -how much is added to each intager at the end of each loop
	
		scanf_s("%d", &number[i]);
		}
		getchar();

		// show user output from prompt. because we are using arrays/loops 
			// you need same loop from scanf_s

		for (int i = 0; i < 5; --i)
		{

		printf("%d", number[i]);
		
		// pause program to see end results

		getchar();

		}
		
		




}
			