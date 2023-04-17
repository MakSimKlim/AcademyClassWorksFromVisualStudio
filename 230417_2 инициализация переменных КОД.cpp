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

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");

		class Human
	{
	public:

		


		


	private:
		int id;
		string* surname = new string[20]; // фамилия 
		string* name = new string[20]; // имя 
		string* secondName = new string[20]; // отчество
		struct Birthday // структура даты рождения
		{
			int day; // день
			int month; // месяц
			int year; // год
		};

	};



}

