// 10_03_23
//
//
//передача структуры в функцию
//sizeof - оператор показывающий размер структуры в байтах

#include <iostream>
#include <time.h>

using namespace std;

struct Cinema                        // структура это тип данных!!!
{
	string nameCinema;               // поля, которые будем задавать по ходу программы
	string genre;
	int hour;
	int minutes;
	int year;
	string countryProduction;
	string directed;                 
};

//передача структуры в функцию (Cinema - тип данных, item - аргумент)
void PrintCinema(Cinema item) {
	cout << "Название фильма: " << item.nameCinema << "\n"; //через точку показываем с какого поля достать инфу
	cout << "Жанр: " << item.genre << "\n";
	cout << "Продолжительность фильма: " << item.hour << " часов " << item.minutes << " минут " << "\n";
	cout << "Год выхода: " << item.year << "\n";
	cout << "Страна: " << item.countryProduction << "\n";
	cout << "Режиссёр: " << item.directed << "\n";
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	Cinema film1;

	string nameFil;// вариант ввода данных пользователем
	cout << "Введите название фильма: "<<"\n";
	cin >> nameFil;// вариант ввода данных пользователем
	film1.nameCinema = nameFil;// вариант ввода данных пользователем

	//film1.nameCinema = "Киборг-убийца";
	film1.genre = "Фантастический боевик";
	film1.hour = 1;
	film1.minutes = 47;
	film1.year = 1984;
	film1.countryProduction = "США";
	film1.directed = "Джеймс Кэмерон";

	PrintCinema(film1);

	cout << sizeof(film1) << "\n";
	cout << sizeof(Cinema) << "\n";


	return 0;
}
