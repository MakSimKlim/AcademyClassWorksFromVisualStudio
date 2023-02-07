// Academy_20_01_23_2.cpp : 
// преп. Обухов Данил
// цикл, оператор "FOR"

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	//int i = 0;// для С++ эта i и которая ниже - это разные переменные
	//	
	//for (int i = 1; i < 7; i++)//i не та же переменная, что выше
	//{
	//	cout << "Выполнено количество отжиманий: " << i << endl << endl;
	//	
	//}
	//
	//cout << "Выполнено количество отжиманий: " << i << endl << endl;

	int countExample = 0;
		
	cout << "**************Отжимания (считалка)*******************" << endl << endl;
	cout << "До скольки сможешь отжаться? ?" << endl << endl;
	cin >> countExample;


	//int i = 0;
	//while (true) {
	//	cout << "Красавчик!!! Выыполнил: " << i << endl;
	//	i++;
	//}



	for (int i = 0; i <= countExample; i++)
	{
		cout << "Красавчик!!! Выыполнил: " << i << endl << endl;
		
	}
	
	system("pause");

	return 0;
}
