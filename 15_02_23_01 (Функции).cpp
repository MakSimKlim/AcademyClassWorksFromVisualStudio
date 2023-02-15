// 15_02_23_01 (Функции)
//
//
//

#include <iostream>
#include <math.h>

using namespace std;

void loadArr(int arr[], int sizeArr)//результат из функции выйдет измененный массив (это работает только с массивами, с int так не работает)
{
	for (int i = 0; i < sizeArr; i++)
	{
		arr[i] = 1 + rand() % 10;
	}
}

//int loadArr(int arr[], int sizeArr)// вариант замены функции VOID
//{
//	const int sArr = 5;
//	int returnArr[sArr];
//	
//	
//	
//	for (int i = 0; i < sizeArr; i++)
//	{
//		arr[i] = 1 + rand() % 10;
//		returnArr[i] = arr[i];
//		cout << returnArr[i] << " ";
//	}
//	return returnArr[sArr];
//}


void printArr(int arr[], int sizeArr)
{
	for (int i = 0; i < sizeArr; i++)
	{
		cout << arr[i]<<" ";
	}
}


int main()
{
    setlocale(LC_ALL, "Rus");

	const int sizeA = 5;
	int arrayTest[sizeA];
	
	//
	//for (int i = 0; i < sizeA; i++)
	//{
	//	cout << arrayTest[i]<<" ";
	//}
	
	loadArr(arrayTest, sizeA);

	printArr(arrayTest, sizeA);

}
