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

	ofstream out;

	out.open("D:/Климов/мои проги/!AcademyWorks/TestFileForOpenInCPP.txt");

	if (out.is_open())
	{
		out << "я перезаписал файл2" << "\n";
	}

	cout << "End of program" << "\n";

	return 0;
}
