//01.02.23
//Задача на применение массива
//
//вычислить среднюю температуру
//посчитать кол-во дней с температурой меньше средней температуры


#include <iostream>

using namespace std;

const int N = 10;

int main()
{
	setlocale(LC_ALL, "Rus");

	int averageTemp = 0, countDay = 0;

	int j = 0;

	int containerSum = 0;

	int days[N] = { -17,-23,-13,-15,2,-11,-15,-25,-27,-20 };// N - размер массива


	for (int i = 0; i < N; i++)
	{
		containerSum += days[i];
		averageTemp = containerSum / N;
		//countDay += 1;
		//while (i=9)
		//{

		//if (days[i] < averageTemp)
		//{
		//	countDay++;

		//}

		//}

		//while (days[i] < averageTemp)
		//{
		//	countDay += 1;
		// 	j++;
		//}

	}

	for (int j = 0; j < N; j++)
	{
		if (days[j] < averageTemp)
		{
			countDay += 1;
		}
	}


	cout << averageTemp << "\n";
	cout << countDay << "\n";

	system("pause");

	return 0;
}
