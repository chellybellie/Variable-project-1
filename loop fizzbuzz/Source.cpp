#include <iostream>

int main()
{

	
	int K, F, B;
	printf(" enter in 3 number");
	scanf_s("%d %d %d", &K, &F, &B);
	getchar();

	for (int i = 0; i <= K; i++)
	{
		if ((i % F == 0) && (i % B == 0))
		{
			printf("fizzbuzz \n");
		}
		else if (i % F == 0)
		{
			printf("fizz \n");
		}
		else if (i % B == 0)
		{
			printf("buzz \n");
		}
		else
		{
			printf("%d \n", i);
		}
	}
	getchar();
	system("pause");
}