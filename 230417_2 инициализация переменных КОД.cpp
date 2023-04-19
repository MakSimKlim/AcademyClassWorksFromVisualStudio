// 230417_2 инициализация переменных КОД
// 
// Класс человек
// 
// поля:
// идентификационный номер
// фамилия
// имя
// отчество
// дата рождения
// 
// должен быть конструктор с параметрами
// сеттеры- методы которые что-то получают
// геттеры- методы которые что-то получают
//

#include <iostream>
#include <cstdlib> // содержит srand() и rand()

using namespace std;

class Human
{
public:
	//прототип функции вызова приватных переменных класса
	void getName(int id, int age, string surname, string name, string secondName);

private:
	int id;
	int age;
	string surname; // фамилия 
	string name; // имя 
	string secondName; // отчество
};

//функция вынесенная за тело класса
void Human::getName(int id, int age, string surname, string name, string secondName) 
{
	cout << " Порядковый номер: " << id << "\n";
	cout << " Возраст человека: " << age << "\n";
	cout << " Фамилия человека: " << surname << "\n";
	cout << " Имя человека: " << name << "\n";
	cout << " Отчество человека: " << secondName << "\n";
	cout << "\n";
}


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	cout << "Программа Класс 'Человек'" << "\n";
	cout << "\n";

	string surname = "Иванов ";
	string name = "Иван ";
	string secondName = "Иванович ";
	const int kolichestvo = 10;
	//инициализация объекта chelovek класса human
	Human chelovek[kolichestvo];


	for (int i = 0; i < kolichestvo; i++)
	{
		int id = i+1;
		int age = 10 + rand() % 90 - 10;
		//присвоение значений объекту
		chelovek[i].getName(id, age, surname, name, secondName);

	}

}

