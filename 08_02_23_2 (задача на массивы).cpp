// 08_02_23_2 (задачи)
//
//создать массив из символов

#include <iostream>
#include <time.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int sizeArr = 0;
    //ограничение размера массива (незаполненные (меньшие размеры) заполняются нулями, если больше - вылет программы)
    int arrStar[15][15]; // проверка на валидность вводных данных от пользователя (3 сита: правды, истинности и т.д.)
    //рисовать будем не массивом а cout


    cout << "Программа нарисуй звёздочку версия 2.0" << "\n";
    cout << "Введите нечетное число, не больше 15" << "\n";
    cin >> sizeArr;
    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = 0; j < sizeArr; j++)
        {
            //заполняем массив "маркерами"
            if (i == j || i == sizeArr - 1 - j || i == sizeArr / 2 || j == sizeArr / 2) arrStar[i][j] = 1;
            else arrStar[i][j] = 0;
            cout << arrStar[i][j];
        }

        cout << "\n";
    }
    for (int r = 0; r < sizeArr; r++)
    {
        for (int k = 0; k < sizeArr; k++)
        {
            if (arrStar[r][k] == 0) cout << "." << " ";
            else cout << "*" << " ";
        }
        cout << "\n";
    }


    system("pause");
    return 0;
}
