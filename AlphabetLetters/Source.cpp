#include <iostream>

int main()
{
	int varA, varB, varC;
	char charA, charB, charC;

	printf("please list a letter form the alphabet");
	scanf_s("%c %c", &charA, 1, &charB, 1);
	getchar();
	int ascii1 = (charA - 65) % 32 + 65;
	int ascii2 = (charB - 65) % 32 + 65;
	int ascii3 = ((ascii1 + ascii2) / 2);
	charC = ascii3;
	printf("the middle letter is %c", charC);
	getchar();

}
