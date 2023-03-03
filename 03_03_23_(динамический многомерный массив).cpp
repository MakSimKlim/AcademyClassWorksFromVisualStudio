// 03_03_23_(задачи)
//
//
//
//динамический двумерный массив (указатель на указатель)
// 
//чтобы получился трех мерный массив, то *** и **


#include <iostream>
#include <time.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int counter = 0;

    cout << "Введите желаемое количество строк для заполнения массива" << "\n";

    cin >> counter;

    cout << "\n";

    int** dinamicArr = new int* [counter];//new - выделяем место в динамической памяти, начало диапазона int

    int counter2 = 1 + rand() % 20;

   for (int i = 0; i < counter; i++)
   {
      dinamicArr[i] = new int[counter2];

      for (int j = 0; j < counter2; j++)
      {
        dinamicArr[i][j] = 1 + rand() % 9;
        cout << dinamicArr[i][j]<<" ";
      }
    cout << "\n";
   }

   return 0;
}

