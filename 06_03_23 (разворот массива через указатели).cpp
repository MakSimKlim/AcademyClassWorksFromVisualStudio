// 06_03_23 (указатели)
//
//
//сдвиг массива (вправо на один элемент) через указатель и рекурсию
//
// Задача:
// 1) передать двумерный динамический массив в функцию
// 2) сдвинуть массив циклически через рекурсию
// 3) использовать указатели
// 
//
// решение
// инициализация происхродит только в мэне


//=====================================================================================================================
// 
// 1) передать двумерный динамический массив в функцию

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//void printDinamicArr(int** arr, int size1, int size2)
//{
//    for (int i = 0; i < size1; i++)
//    {
//        arr[i] = new int[size2];
//
//        for (int j = 0; j < size2; j++)
//        {
//            int randomNumb = 1 + rand() % 9;
//            arr[i][j] = randomNumb;
//            cout << arr[i][j] << " ";//передача двумерного массива в функцию через указатели
//          //  cout << *(arr +j) << "\n";//одинаково с записью выше
//        }
//        cout << "\n";
//    }
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    srand(time(NULL));
//
//    int counter = 0;
//
//    int* ptr;
//
//    cout << "Введите желаемое количество строк для заполнения массива" << "\n";
//
//    cin >> counter;
//
//    int** dinamicArr = new int* [counter];//new - выделяем место в динамической памяти, начало диапазона int
//    int* arrPtr = new int[counter];
//    int counter2 = 5;
//
//    printDinamicArr(dinamicArr, counter, counter2);
//
//    return 0;
//}

//=====================================================================================================================
// 
// 2) сдвинуть массив циклически указателями через рекурсию вправо
// 
// 
#include <iostream>
#include <time.h>

using namespace std;

void printDinamicArr(int** arr, int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        arr[i] = new int[size2];

        for (int j = 0; j < size2; j++)
        {
            arr[i][j] = 1 + rand() % 9;

            cout << arr[i][j] << " ";//передача двумерного массива в функцию через указатели

          //  cout << *(arr +j) << "\n";//одинаково с записью выше
        }
        cout << "\n";
    }

    int** arrContainer = new int* [size1]; // сдвиг массива

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {



        }


    }


}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int counter = 0;
    int counter2 = 0;
    int shift = 0;//сдвиг на указанное количество знаков

    cout << "Введите желаемое количество строк для заполнения массива" << "\n";

    cin >> counter;
    cin >> counter2;
    //int counter2 = 5;

    int** dinamicArr = new int* [counter];//new - выделяем место в динамической памяти, начало диапазона int
    

    printDinamicArr(dinamicArr, counter, counter2);

    return 0;
}
//=====================================================================================================================
