// 08_02_23_1 (задачи)
//
//найти индексы первого вхождения (ключ) массива размерами не более чем 100х100

#include <iostream>
#include <time.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int row, column;//строка, столбец массива
    cout << "Программа для максимального вхождениия максимального элемента массива v1.0\n";
    cout << "Введите кол-во строк и столбцов:\n";
    cin >> row >> column;
    int array[100][100]; //ограничение размеров массива 100х100
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array [i][j] = 1 + rand() % 99;//наполняем массив рандомными числами
            cout << array[i][j]<<"\t";
        }
        cout << "\n";
    }
    int arrRes = array[0][0], r_max = 0, k_max = 0; //второй массив для одновременного вывода результатов
    for (int r = 0; r < row; r++)
    {
        for (int k = 0; k < column; k++)
        {
            if (array[r][k]>arrRes)
            {
                arrRes = array[r][k];
                r_max = r;
                k_max = k;

            }
        }
    }

    cout << r_max << " " << k_max;



    system("pause");
    return 0;
}

