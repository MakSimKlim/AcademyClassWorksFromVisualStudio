// 17_03_23 (объединение)
#include <iostream>
#include <time.h>

using namespace std;

struct Test                        // структура это тип данных!!!
{
	// битовые поля
	unsigned int Python : 1; //поля будут строго занимать 3 бита (:1)
	unsigned int JS : 3;//поле будет занимать 3 бита (:3)
	unsigned int PHP : 8; //поле будет занимать 8 бит (:3)

	// 0...7 (3 бит)
	// 0...31 (6 бит)
	// 0...12 (5 бит)
	// 0...100 (8 бит)
};

union Employee // объединение
{
	int id;
	double salary;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	
	cout << sizeof Test << "\n";// показывает размер структуры
	cout << sizeof Employee << "\n"; // показывает размер объединенеия

	return 0;
}
