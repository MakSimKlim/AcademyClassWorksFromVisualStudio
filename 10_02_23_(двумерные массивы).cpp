// 10_02_23_(двумерные массивы)
//
//дан квадратный двумерный массив п х п и число к
// если кменьше 0, то вывести диаг выше главной диаг, и обратно в обратном случае
// 
//максим в с++ на ютубе

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int n,k;
    int arrMatrix[10][10];

    cout << "Заполнение квадратной матрицы" << "\n";
    cout << "Укажите размер матрицы. Значение должно быть не больше 10" << "\n";
    cin >> n;
    //заполнение массива
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arrMatrix[i][j] = 1 + rand() % 9; 
            cout << arrMatrix[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Укажите число для отступа от гравной диагонали: " << "\n";//>0 нижеглавной диагонали, иначе выше диагонали
    cin >> k;
    for (int r = 0; r < n; r++)
    {
        for (int l = 0; l < n; l++)
        {
            if (r - l - k == 0) cout << arrMatrix[r][l]<<" ";
        }
        //cout << "\n";
    }







    system("pause");
    return 0;
}

