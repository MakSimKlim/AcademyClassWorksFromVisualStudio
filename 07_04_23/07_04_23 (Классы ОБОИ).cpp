// 07_04_23 (Классы ОБОИ)
//
//Написать программу стоимость обоев
//в результате выдать необходимое кол-во рулонов и общую стоимость закупки
//использовать классы: квартира, комната, рулон обоев

// Главный СPP

#include <iostream>
#include <Windows.h>
#include "Header.h"
#include "Source.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Расчет обоев версия 1.0" << "\n";
    int inputCountRoom = 0;
    double roomWidth = 0, roomLength = 0, roomHeight = 0;

    cout << "Введите количество комнат, в которых требуется сделать ремонт" << "\n";
    cin >> inputCountRoom;

    Room* room = new Room[inputCountRoom];//массив с комнатами

    for (int i = 0; i < inputCountRoom; i++)
    {
        cout << "Введите ширину комнаты: " << "\n";
        cin >> roomWidth;
        room[i].width = roomWidth;
        cout << "Введите длину комнаты: " << "\n";
        cin >> roomLength;
        room[i].length = roomLength;
        cout << "Введите высоту комнаты: " << "\n";
        cin >> roomHeight;
        room[i].height = roomHeight;

        double result = room[i].getSquare();

        cout << "Площадь стен в комнате #"<< i+1 << " равна: " << result << "\n";

    }


}

