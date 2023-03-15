// 15_03_23 (объединение - UNION)
//
//
#include <iostream>
#include <time.h>

using namespace std;

union Employee
{
	int id;
	double salary;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Employee myEmployee;

	myEmployee.id = 15;
	cout << "The first value (id) at ";
	cout << "the allocated memory: ";
	cout << myEmployee.id << "\n";
	myEmployee.salary = 100.35;//затирает предыдущее id
	cout << "The next value (salary) stored";
	cout << "after removing the previous value: ";
	cout << myEmployee.salary << "\n";
	myEmployee.id = 30;//затирает предыдущее salary
	cout << "The first value (id) at ";
	cout << "the allocated memory: ";
	cout << myEmployee.id << "\n";

	return 0;
}
