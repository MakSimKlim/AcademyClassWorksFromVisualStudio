// 08_03_23 (структуры примеры2)
//
//
#include <iostream>
#include <time.h>

using namespace std;

//вложенность структур массивом!!!

struct Distance
{
    int meters;         // поля структуры
    float sentimetres;  // поля структуры
};

struct Room             // структура с разными типами переменных
                        //под каждое поле! структуры выделяется столько памяти исходя из типа данных
{
    Distance lenght;
    Distance width;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    Room kitchen;
    kitchen.lenght.meters = {12};
    kitchen.lenght.sentimetres = 13 * 0.01;                      //перевод в метры
    kitchen.width.meters = {4};
    kitchen.width.sentimetres = 15 * 0.01;                       // перевод в метры

    float l = kitchen.lenght.meters + kitchen.lenght.sentimetres;//длина
    float w = kitchen.width.meters + kitchen.width.sentimetres;  //ширина
    float res = l * w;

    cout << "Площадь комнаты: " << res << " м2" << "\n";
    return 0;
}
