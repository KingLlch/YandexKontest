#include <iostream>
#include <cmath>

float pi;
float pi1;

int main()
{

	for (int i = 0; i < 6; i++)
	{
		pi = pow(-1, i) * (1 / ((3 + ((i - 1) * 2)) * (pow(3, i))));
		pi1 = pi1 + pi;
	}

	std::cout << sqrt(12) * pi1;
}
