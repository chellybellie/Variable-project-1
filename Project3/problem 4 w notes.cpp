#include <iostream>
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


	for (int i = 0; i < 5; ++i)
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

	for (int i = 4; i < 0; --i)
	{

		printf("%d", number[i]);

		// pause program to see end results
	}
	getchar();


}