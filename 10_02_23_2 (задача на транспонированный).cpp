// 10_02_23_2 (задача на транспонированный массив)
//
//
// сделать двумерный массив
// затем сделать второй массив транспонированным от первого
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int n, m;
    int arrMatrix[250][200];
    int arrTrans[200][250];

    cout << "Заполнение квадратной матрицы" << "\n";
    cout << "Укажите размер матрицы. Значение должно быть не больше 250 " << "\n";
    cin >> n;
    cout << "Укажите размер матрицы. Значение должно быть не больше 200 " << "\n";
    cin >> m;
    //заполнение массива
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arrMatrix[i][j] = 1 + rand() % 9; 
            cout << arrMatrix[i][j] << " ";
        }
        cout << "\n";

    }
    cout << "\n";
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            arrTrans[j][i] = arrMatrix[i][j];
            cout << arrTrans[j][i] << " ";
        }

        cout << "\n";
    }

}