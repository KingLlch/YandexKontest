#include <iostream>
#include <cmath>

int a;
int b;
int c;

int main()
{
	std::cin >> a >> b >> c;

	if (c - a > b - a)
	{
		std::cout << "B " << abs(b - a);
	}
	else { std::cout << "C " << abs(c - a); }


}
