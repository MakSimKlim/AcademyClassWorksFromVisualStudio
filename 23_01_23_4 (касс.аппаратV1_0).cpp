// Academy_23_01_23_1.cpp 

//Программа имитации кассового аппарата новогодних товаров
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int idGoods = 0, countGoods1 = 10, countGoods2 = 20, countGoods3 = 456,
		countGoods4 = 1000, countClient = 0, countGoodsAll = 0, moreGoods = 0, sumPosition = 0, countContainGoods =0;
	double toyCar = 300.00, doll = 200.00, mimiMishka = 400.00, dozdik = 15.00, containSum = 0;

	cout << "новогодний 1с" << endl;

	cout << "Желаемое количество обслуживаемых клиентов подряд" << endl;
	cin >> countClient;

	while (countClient != 0)
	{
		cout << "Введите количество позиций покупателя" << endl;
		cin >> countGoodsAll;
		if (countGoodsAll > 4)
		{
			while (countGoodsAll != 0)
			{

				cout << R"(
Выберите товар из списка:
1 - Игрушечная машинка - Цена - 300.00 р,
2 - Кукла - Цена - 200.00 р,
3 - Игрушка "МимиМишка" - Цена - 400.00р,
4 - Дождик "Новогодний" - Цена - 15.00 р.
)" << endl;
				cin >> idGoods;

				switch (idGoods)
				{
				case 1:
					cout << "Выберите количество товара Игрушечная машинка";
					cin >> countContainGoods;
					containSum = toyCar * countContainGoods;
					countGoods1 = countGoods1 - countContainGoods;

					break;
				case 2:
					cout << "Выберите количество товара Кукла";
					cin >> countContainGoods;
					containSum = doll * countContainGoods;
					countGoods2 = countGoods2 - countContainGoods;

					break;
				case 3:
					cout << "Выберите количество товара Игрушка 'МимиМишка'";
					cin >> countContainGoods;
					containSum = mimiMishka * countContainGoods;
					countGoods3 = countGoods3 - countContainGoods;

					break;
				case 4:
					cout << "Выберите количество товара Дождик 'Новогодний'";
					cin >> countContainGoods;
					containSum = dozdik * countContainGoods;
					countGoods4 = countGoods4 - countContainGoods;

					break;
				default:
					break;
				}

			}
		}
	}






	system("pause");

	return 0;

}

