// 20_02_23_03 (бинарный поиск)
//
//бинарный поиск осуществляется только в отсортированном массиве!!! это важно

#include <iostream>
#include <time.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int arrSize = 20;
    int arrStart = 0, arrEnd = arrSize;        // задаем начало и конец массива
    int arr[arrSize];
    int index_min = 0;                         // переменная для минимального значения
    int temp;                                  // переменная- буфер, нужная при сортировке массива

    for (int i = 0; i < arrSize; i++)          // заполняем массив рандомайзером
    {                                          //Вывод неотсортированного массива
        arr[i] = 1 + rand() % (10 - 1);
        cout << arr[i] << " ";
    }
    cout << "\n";                              

    for (int i = 0; i < arrSize - 1; i++)      // сортируем массив методом выбора
    {
        index_min = i;                         //за минимальный берем первый из неотсортированных
        for (int j = i + 1; j < arrSize; j++)  // начинаем проверять с последующего за ним элемента все оставшиеся
        {
            if (arr[j] < arr[index_min])       //если какой-то из них меньше...
            {
                index_min = j;                 //... то запоминаем его номер
            }

        }
        if (index_min != i)                    //если в ходе проверки индекс минимального элемента поменялся
        {
            temp = arr[i];                     //то меняем местами элементы
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
                                              //Вывод отсортированного массива
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int searchElem = 0;
    int notSearch = -1;

    cout << "Введите число" << "\n";
    cin >> searchElem;

    while (arrStart<arrEnd)
    {
        int arrMiddle = (arrStart + arrEnd) / 2;
        if (searchElem == arr[arrMiddle])
        {
            searchElem = arrMiddle;
            break;
        }
        if (searchElem < arr[arrMiddle])
        {
            arrEnd = arrMiddle - 1;
        }
        else
        {
            arrStart = arrMiddle + 1;
        }
    
    
    }
    if (searchElem==notSearch)
    {
        cout << "Элемент не найден!";
    }
    else
    {
        cout << "Элемент найден!"<< searchElem + 1;
    }

    cout << "\n";
    return 0;
}
