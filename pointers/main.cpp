#include <iostream>
using namespace std;
void main()
{
	int var = 0;
	float far = var;

	printf("%f\n", far);

	far = *(float*)&var;

	printf("%f\n", far);


	system("pause");




}