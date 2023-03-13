// 13_03_23 (предпроцессор)


//ДОБАВИТЬ ЗАГОЛОВОЧНЫЙ ФАЙЛ: проект - добавить модуль - файл заголовка h
//чтобы лишнюю писанину убрать в другие файлы, т.к. exe объединяет всё это в себе
//работает только там, откуда его вызвали (в каждом срр свой заголовочный файл)

//вот это вставить в заголовочный файл:
////проект - добавить модуль - файл заголовка h
//
//
//#pragma once // - означает подключение заголовочного файла
//#include<time.h>
//#include<iostream>
//
//void writeArray(int* arr, int size)//обязательна передача массива по ссылке в эту функцию
//{
//    srand(time(NULL));
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = 1 + rand() % (10 - 1);
//    }
//
//}



#include<iostream>
#include "Header.h" //- заголовочный файл
#include<Windows.h>

#define Pi 3.14 // предпроцессор
#define size 10
#define forever for (int i = 0; i < 7; i++) // предпроцессор

using namespace std;

int main()
{
    int arrayTest[size];
    setlocale(LC_ALL, "Rus");
    writeArray(arrayTest, size);

    int i = 0;

    forever
    {
    cout << arrayTest[i] << " ";
    }
     
    cout << "\a";//выводит звук!!! через колонки

    return 0;
}
