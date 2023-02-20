// 20_02_23_01
//
//
//Сортировки
//
//
// //функция подсчета времени
//gettimeofday - 1/01/1970 - начало эпохи Юникс систем, поэтому отсчет всегда от этой даты 




////Линейный поиск (хорош для маленьких массивов)




#include <iostream>
#include <time.h>

using namespace std;

int LinearSearch(int array[], int size, int key)//нач знач, массив, размер знач
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
        else 
        {
            return -1;
        }
    }


}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int arraySize = 10;
    int a[arraySize], searchKey, element;
    
    for (int x = 0; x < arraySize; x++)
    {
        a[x] = 1 + rand() % 10;
        cout << a[x] << " ";
    }
    //Следующая строка выводит на экран сообщение
    //Введите ключ поиска
    cout << "\nВведите ключ: ";
    cin >> searchKey;
    element = LinearSearch(a, arraySize, searchKey);
    
    if (element != -1)
    {//Следующая строка выводит на экран сообщение
        //Найдено значение в элементе
        cout << "Элемент найден: " <<
            element << "\n";
    }
    else
    {
        //Следующая строка выводит на экран
        //сообщение Значение найдено
        cout << "\n Значение не найдено";
    }

    return 0;

}


//теория
// о - это функция
// о(п) - линейная сложность