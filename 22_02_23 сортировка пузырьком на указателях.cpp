// 22_02_23 сортировка пузырьком на указателях
// 
//


#include <iostream>
#include <time.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int* arrNoSort;//указатель в памяти

   
    const int arrSize = 20;

    arrNoSort = new int[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        arrNoSort[i] = 1 + rand() % (20 - 1);
        cout << arrNoSort[i]<<" ";
    }
    
    cout << "\n";

    int container;

    for (int i = 0; i < arrSize -1; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            if (arrNoSort[j] > arrNoSort[j + 1])
            {
                container = arrNoSort[j];
                arrNoSort[j] = arrNoSort[j + 1];
                arrNoSort[j + 1] = container;
            }
        }
    }
    for (int i = 0; i < arrSize; i++)
    {
        cout << arrNoSort[i] << " ";
    }
    return 0;
}
