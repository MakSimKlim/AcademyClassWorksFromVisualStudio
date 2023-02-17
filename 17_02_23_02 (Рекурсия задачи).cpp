// 17_02_23_02 (Рекурсия задачи)
//
//Написать функцию для вычисления факториала
//
//
#include <iostream>
#include <cmath>

using namespace std;

int fact(int n)//нач знач, массив, размер знач
{
    if (n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    int n = 5;
    cout << fact(n);

}
