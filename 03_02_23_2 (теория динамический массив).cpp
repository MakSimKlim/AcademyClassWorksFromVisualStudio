// 03_02_23
//
//
//динамический массив - 
//

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));//рандомайзер
    setlocale(LC_ALL, "Rus");

    int N = 0;

    cout << "Введите желаемый размер массива: "<<"\n";
    cin >> N;

    int *dinamicArr = new int [N];//выделение памяти и объявление динамического массива
    //int мы задаем размер памяти под массив
    // * - это указатель на ячейку памяти в программе (чтобы выделить память при компиляции)
    // по умолчанию заполняются пустые места нулями
    for (int i = 0; i < N; i++)
    {
        dinamicArr[i] = 1 + rand() % 100;

        cout << dinamicArr[i];

    }

    delete [] dinamicArr;
    system("pause");
    return 0;
}

