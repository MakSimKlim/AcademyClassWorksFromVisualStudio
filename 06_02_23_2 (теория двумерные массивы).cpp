//06.02.23
//двумерные массивы - массивы по столбцу и по строке
//
//в массиве всегда один тип данных!!!


#include <iostream>
#include <time.h>


using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");

    const int column = 2;
    const int row = 4;

    int arr[column][row];

    for (int  i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr[i][j] = 1 + rand() % 10;//наполняем массив рандомными числами
            cout << arr[i][j] << "\n";
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}

