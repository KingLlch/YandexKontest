#include <iostream>
#include <cmath>

double m;
double h;
double g;

int main()
{
	std::cin >> m;
	std::cin >> h;

	std::cout << (g = sqrt(pow(m, 2) + pow(h, 2)));

}
