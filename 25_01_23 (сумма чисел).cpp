// Academy_25_01_23.cpp 
//
//вычислить сумму целых чисел от заданного до 500

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int number = 0, sumNumber = 0;

    cout << "**************************************************************" << endl;
    cout << "* Программа вычисления суммы чисел от вводимого числа до 500 *" << endl;
    cout << "**************************************************************" << endl;
    cout << "Введите число: ";
    
    cin >> number;
    
    while (number < 500)
    {
        sumNumber += number;
        number = number + 1;
        
    }
   
    cout << sumNumber << endl;

    system("pause");
    return 0;
}

