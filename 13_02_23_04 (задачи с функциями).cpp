// 13_02_23_04 (задачи с функциями)
//
//написать функцию которая вычисляет минимум из введенных массива
//
//

#include <iostream>
#include <cmath>
//#include <time.h>

using namespace std;

//функция вывода на экран массива
void PrintArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    cout << "\n";
}

//функция рандомного заполнения массива
void RandomArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
    }
}

//функция вычисления min значения в массиве
void MinimumArr (int arr[], int size)
{
   int minimum = arr[0];

    for (int i = 0; i < size; i++)
    {
         if (arr[i] < minimum) minimum = arr[i];
    }
    cout << "минимальное значение: " << minimum << "\n";
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int sizeArr = 4;
    int arrRes[sizeArr];
    int minNumber = 0;

    cout << "заполнение массива с помощью функции" << "\n";

    RandomArr(arrRes, sizeArr);
    PrintArr(arrRes, sizeArr);
    MinimumArr(arrRes, sizeArr);
}


