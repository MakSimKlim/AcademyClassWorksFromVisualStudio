// 22_02_23_задачи с указателями
//
//используя оператор разименования определить наибольшее из двух чисел
//
//указатель удобен для доставания из "строки" нужного элемента

//для  double указывается ** вместо *


#include <iostream>
#include <time.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int num1 = 0, num2 = 0;
    int* pointer1, *pointer2;

    num1 = 1 + rand() % (10 - 1);
    num2 = 1 + rand() % (10 - 1);
    cout << num1 << "\n";//записали в ячейку
    cout << num2 << "\n";
    //разименовать переменную: указать указателю прямую ссылку на ячкйку памяти
    
    pointer1 = &num1;//& высвободили из ячейки памяти от cout и заполнили заранее указанную ячейку с указателем
    pointer2 = &num2;

    if (*pointer1>*pointer2)
    {
        cout << *pointer1;
    }
    else
    {
        cout << *pointer2;
    }


    return 0;
}
