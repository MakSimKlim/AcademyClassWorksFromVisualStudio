 //Academy_23_01_23
 //Рисование в с++

 //прямоугольный треугольник

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int lenghtSqr = 0;

    cout << "************Рисуем скошенный квадрат 1.0 **************" << endl;
    cout << "Введите длину строки: "<<endl;
    cin >> lenghtSqr;

        for (int i = 0; i <= lenghtSqr; i++) // выводит строчки
        {
            for (int j = 1; j <= lenghtSqr - i ; j++)//выводит столбики
            {
                cout << "#";//c andl будет в столбик
            }
            cout << endl;
        }




    system("pause");

    return 0;
}





