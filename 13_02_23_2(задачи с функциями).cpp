// 13_02_23_2(задачи с функциями)
//
//у функции область видимости только внутри себя (локальная область видимости)

#include <iostream>
#include <cmath>
//#include <time.h>

using namespace std;

void PrintArr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << "\n";
    }
    
    cout << "\n";
        
}

void RandomArr(int arr[], int size)
{ 
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % 100;
    }
}



int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int sizeArr = 5;
    int arrRes[sizeArr];

    cout << "заполнение массива с помощью функции" << "\n";

    RandomArr(arrRes, sizeArr);
    PrintArr(arrRes, sizeArr);


}
