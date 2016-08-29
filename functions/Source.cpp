#include <iostream>	

float LesserThen(float A, float B, float C);
float LesserThen(float A, float B);

int main()
{
	float A;
	float B;
	float C;
	printf("insert two values");
	scanf_s("%f %f %f", &A, &B, &C);

	float result = LesserThen(A, B, C);
	printf("Lesser was %f \n", result);

	getchar();
	getchar();
}

float LesserThen(float A, float B, float C)
{
	if (A > B && C > B)
	{
		return B;
	}
	else if ( C > A && B > A)
	{
		return A;
	}
	else
	{
		return C;
	}
	getchar();
	getchar();
}


float LesserThen(float A, float B)
{
	if (A > B)
	{
		return B;
	}
	else
	{
		return A;
	}
	getchar();
	getchar();
}



