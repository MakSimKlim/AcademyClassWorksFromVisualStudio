// 06_02_23.cpp 
//Произведение элементов массива с чётными номерами

#include <iostream>
#include <time.h>

using namespace std;

int main()

{
    srand(time(NULL));//рандомайзер

    setlocale(LC_ALL, "Rus");

    int N = 8;

    int *dinamicArr = new int[N];//выделение памяти и объявление динамического массива
    //int мы задаем размер памяти под массив
    // * - это указатель на ячейку памяти в программе (чтобы выделить память при компиляции)
    // по умолчанию заполняются пустые места нулями
   
    int *accumArr = new int[N];

    int elemMin = 0, elemMax = 0;
    int sumMinus = 0;

    for (int i = 0; i < N; i++)
    {
        dinamicArr[i] = -20 + rand() % 10;
        cout << dinamicArr[i];
    }
    //int accumulate = 1;
    for (int j = 0; j < N; j++)
    {
        if (dinamicArr[j] < 0)
        {
            accumArr[j] = dinamicArr[j];
            
            if (dinamicArr[j] < 0 && dinamicArr[j] < elemMin )
            {
                elemMin = dinamicArr[j];
                cout << elemMin << "\n";
            }
            else if (dinamicArr[j] < elemMin && dinamicArr[j] > elemMax)
            {
                elemMax = dinamicArr[j];
                cout << elemMax << "\n";
            }
        }
        if (dinamicArr[j] < elemMax && dinamicArr[j] > elemMin)
        {
            
            sumMinus += dinamicArr[j];
            cout << sumMinus << "\n";
        }
    }
   

    system("pause");
    return 0;
}
