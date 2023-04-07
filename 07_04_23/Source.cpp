// 07_04_23 (Классы ОБОИ)
//
//Написать программу стоимость обоев
//в результате выдать необходимое кол-во рулонов и общую стоимость закупки
//использовать классы: квартира, комната, рулон обоев

//вспомогательный СРР

#include <iostream>
#include <Windows.h>

using namespace std;

//квартира
class Apartment
{
public:
    //динамический массив для ввода количества комнат
    int countRoom;
    int* rooms = new int[countRoom];

    //конструктор 
    Apartment(int apartCount)
    {
        countRoom = apartCount;
    }

    void getCountRoom(int* rooms, int counter)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << rooms[i] << "\n";
        }
    }
};

//комната 
class Room
{
public:
    double width, height, length;

    //конструктор, здесь нельзя делать какие-то вычисления
    //т к здесь объявляем свойства присущие объекту
    //конструктор ничего не возвращает
    Room(double c_width, double c_height, double c_length)
    {
        width = c_width;
        height = c_height;
        length = c_length;

    };

    //метод 
    double getSquare()
    {
        return ((width+ length)*2* length);
    }

    Room()
    {

    }

private:

};

