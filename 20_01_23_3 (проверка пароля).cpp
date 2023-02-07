// Academy_20_01_23_3.cpp : 
//Проверка пароля



#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int countExample = 0;
    string pass = "Test1234";
	string userPass;
	int countTry = 8;

	cout << "**************Password*******************" << endl << endl;
	cout << "Проверка пароля. Введите пароль:" << endl << endl;
	cin >> userPass;
		
	for (int i = 0; i < countTry; i++)
	{
		if (userPass != pass)
		{
			cout << "Пароль неверен ВВедите пароль"<<endl;
			cout << "У вас осталось:" << countTry - i << "Попыток" << endl;
			cin >> userPass;

		}
		else
		{
			cout << "Проходите"<<endl;
			break;
		}
	}
		
	
	//while (userPass != pass)
	//{
	//	cout << "пароль не верен повторите ввод " <<  endl;
	//	cin >> userPass;
	//}

	system("pause");

	return 0;
}