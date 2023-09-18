#include <iostream>
#include <cmath>

int N, v, v1 = 1, v2 = 2, v3 = 0;

int main()
{
	std::cin >> N;

	for (int i = 1; i <= N; i++)
	{
		std::cout << i << " ";
		v++;//колво чисел выведенных в строку

		if (v == v1)// число выведенных в строку = макс чисел в строке
		{
			std::cout << "\n";
			v = 0;
			if (v3 == 1) { v1--; }
			else if (v1 < v2)
			{
				v1++;//макс чисел в строке
			}
			if (v1 == 1) { v3 = 0; }

			if (v1 == v2)
			{
				v2++;//макс размер строки
				v3 = 1;
			}

		}

	}

}
