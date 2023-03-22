// разделение
//вспомогательный cpp

#pragma
#include <iostream>
#include "Header.h"
#include <string>

using namespace std;

void WriteFile(string fileWay)
{
	ofstream out; // поток для записи
	out.open(fileWay); // открываем файл для записи
	if (out.is_open())
	{
		cout << "Hello world" << "\n";
	}
	cout << "End of program" << "\n";
}






//header

#pragma once
#include <iostream>
#include <string>

using namespace std;

void WriteFile(string fileWay)







// main file

#include <iostream>
#include "Header.h"
#include <string>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Rus");

    string way = "D:/read1.txt";

	WriteFile(way);

}
