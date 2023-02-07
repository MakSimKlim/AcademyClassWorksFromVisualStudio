// Academy_28_01_23_02.cpp : 
// чертеж ромба

#include <iostream>

using namespace std;

int main()
{
       
    setlocale(LC_ALL, "Rus");

    cout << "************Рисуем ромб 1.0 **************" << endl;

    int i, j, N = 5;//j - горизонталь, i - вертикаль
    int center = N / 2;
       
   
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i <= center)
            {
                //верхняя половина ромба
                if (j >= center - i && j <= center + i)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {
                //нижняя половина ромба
                if (j >= center + i - N + 1 && j <= center - i + N - 1)
                    cout << "*";
                else
                    cout << " ";
            }
           
        }
        cout << "\n";
    }


    system("pause");

    return 0;
}
