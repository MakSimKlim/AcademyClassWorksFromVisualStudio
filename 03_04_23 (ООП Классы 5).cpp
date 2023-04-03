// 03_04_23 (ООП Классы 5)
//
//вывод в файлы

//main.cpp
#include "Header.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");

	User user1;

	string name = "Василий";

	user1.getName(name);

	user1.getSalary(138.5, 168, 1.15);
}

//вспомогательный cpp
#pragma
#include "Header.h"

using namespace std;

float countSalary(float priceHours, int hours, float ratioUral)// метод подсчета зарплаты в скрытом методе (скрыт от остальных)
{
	float salary = priceHours * hours * ratioUral;

	return salary;
}


void getSalary(float priceHours, int hours, float ratioUral)//функция обработчик напиписанная нами, вызывает расчет из скрытого метода
		//то что в скрытом методе, никто не видит
{
	float result = countSalary(priceHours, hours, ratioUral);

	cout << result;
}

//header.h
#pragma once
#include <iostream>
#include <Windows.h> // for string
...