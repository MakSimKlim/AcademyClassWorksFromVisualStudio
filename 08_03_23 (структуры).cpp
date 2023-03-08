// 08_03_23 (структуры)
//
//
//struct - ключевое слово для структур

#include <iostream>
#include <time.h>

using namespace std;

struct Part          // структура с разными типами переменных
                     //под каждое поле! структуры выделяется столько памяти исходя из типа данных
{
    string namePart; // поля структуры
    float pricePart; // поля структуры
    int numberPart;  // поля структуры
};

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    Part part1;
    part1.namePart = "Двигатель";
    part1.pricePart = 345.00;
    part1.numberPart = 75643;

    Part part2;
    part2.namePart = "Коробка передач";
    part2.pricePart = 150.00;
    part2.numberPart = 88362;

    cout << "Наименование детали: " << part1.namePart << "\n";
    cout << "Цена детали: " << part1.pricePart << "\n";
    cout << "Номер детали: " << part1.numberPart << "\n";

    cout << "Наименование детали: " << part2.namePart << "\n";
    cout << "Цена детали: " << part2.pricePart << "\n";
    cout << "Номер детали: " << part2.numberPart << "\n";

    return 0;
}
