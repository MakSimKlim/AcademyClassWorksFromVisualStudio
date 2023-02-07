// Academy_20_01_23_1.cpp : 
// преп. Обухов Данил
// программа подсчета стоимости разговора различных сотовых операторов

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int idMts = 1, idTele2 = 2, idYotaKZ = 3, idMegafonCH = 4; // задали id
	
	int outputOperator = 0, inputOperator = 0;

	float mtsTime = 0.90, tele2Time = 0.50, yotaKzTime = 1.50, megafonChTime = 3.45;//стоимость минуты
	
	float timeCall;
	
	cout << "**************Расчет стоимости звонка 1.0****************"<<endl;
	
	cout << "Ввыберите Вашего оператора связи исходящего звонка:" << endl;
	cout << "1 - МТС - 0.90 р/минута " << endl;
	cout << "2 - ТЕЛЕ2 - 0.50 р/минута " << endl;
	cout << "3 - Йота Казахстан - 1.50 р/минута " << endl;
	cout << "4 - Мегафон Китай - 3.45 р/минута " << endl;
	cin >> outputOperator;
	cout << "Ввыберите Вашего оператора связи:" << endl;
	cout << "1 - МТС - 0.90 р/минута " << endl;
	cout << "2 - ТЕЛЕ2 - 0.50 р/минута " << endl;
	cout << "3 - Йота Казахстан - 1.50 р/минута " << endl;
	cout << "4 - Мегафон Китай - 3.45 р/минута " << endl;
	cin >> inputOperator;

	cout << "Укажите длительность разговора в минутах " << endl;
	cin >> timeCall;
	
	float sum = 0;

	switch (outputOperator)
	{
	case 1: 
		if (inputOperator==idMts)
		{
			cout << "стоимость разговора равна: " << sum << endl;
		}
		else if (inputOperator == idTele2)
		{
			sum = mtsTime * timeCall;
			cout << "стоимость разговора равна: " << sum << endl;
		}
		else if (inputOperator == idYotaKZ)
		{
			timeCall *= 15;//timeCall = timeCall * 15
			sum = mtsTime * timeCall;
			cout << "стоимость разговора равна: " << sum << endl;
		}
		else if (inputOperator == idMegafonCH)
		{
			timeCall *= 60;
			sum = mtsTime * timeCall;
			cout << "стоимость разговора равна: " << sum << endl;
		}
		break;
	//case 2: cout <<
	//	break;
	//case 3: cout <<
	//	break;
	//case 4: cout <<
	//	break;
	//default:
	//	break;


	}


    system ("pause");

	return 0;
}

