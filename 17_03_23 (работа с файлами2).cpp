// 17_03_23 (работа с файлами2)
//
//
#include <iostream>
#include <time.h>
#include <fstream> // эта библиотека лучше, чем cstdio

using namespace std;

// открываем файл

int main()
{
	setlocale(LC_ALL, "Rus");

	ofstream out;//библиотека ofstream класс out

	out.open("D:/Климов/мои проги/!AcademyWorks/TestFileForOpenInCPP.txt");//open - метод открытия файла класса out

	if (out.is_open())//is_open - метод класса out для проверки
	{
		out << "я перезаписал файл2" << "\n";
	}

	cout << "End of program" << "\n";

	return 0;
}
