//			Написать имитацию кассового аппарата для
//			магазина, торгующего новогодними товарами.Кассир
//			должен выбрать товар из списка, ввести его количество,
//			затем выбрать следующий товар.По завершению ввода
//			вывести на экран всю сумму покупки.Предусмотреть
//			наличие скидки.В списке товаров должно быть не меньше
//			4 - х товаров, должна отображаться их цена.Предусмотреть
//			неправильно вводимые данные.
//			■ Реализовать возможность обслуживания нескольких
//			клиентов подряд;
//			■ Хранение общей выручки магазина;
//			■ Ограничить количество товара в магазине.

#include <iostream>
using namespace std;

int main()

{
	setlocale(0, "");

	int goods_id{ 0 }; // выбор товаров из списка

	int count_goods_1{ 10 }, count_goods_2{ 15 }, count_goods_3{ 456 }, count_goods_4{ 1000 }; // кол-во товаров на складе (остатках)

	int count_contain_goods{ 0 }, store_revenue{ 0 }; // кол-во покупаемого товара, выручка магазина

	double toy_car{ 350.00 }, doll{ 243.00 }, mishka{ 450.00 }, dozdik{ 15.00 }; // типы товаров

	int answer_id{ 1 }; // переменная выбора ответа да (1) или нет (0)

	double total_amount_1{ 0 }, total_amount_2{ 0 }, total_amount_3{ 0 }, total_amount_4{ 0 }, total_amount{ 0 };// total_amount_1-4 стоимость покупки по типам товаров, total_amount - общая сумма покупки


	cout << "******Касса новогодняя beta_v.0.7587******" << "\n";


	while (answer_id != 0)
	{

		while (answer_id != 0)
		{
			cout << "\nВыберите товар из списка: \n\n\t";

			cout << "1 - Игрушечная машинка " << toy_car << " руб." << "      Кол-во: " << count_goods_1 << "\n\t";
			cout << "2 - Кукла " << doll << " руб." << "                   Кол-во: " << count_goods_2 << "\n\t";
			cout << "3 - Плюшевый мишка " << mishka << " руб." <<"          Кол-во: " << count_goods_3 << "\n\t";
			cout << "4 - Новогодний Дождик " << dozdik << " руб." << "        Кол-во: " << count_goods_4 << "\n\n\t";
			cout << "Опции: " << "\n\t";
			cout << "5 - ПРОЛОЖИТЬ \n\t"; 
			cout << "6 - ВЫХОД ИЗ ПРОГРАММЫ \n";


			cin >> goods_id;

			switch (goods_id)
			{
			case (1):
				if (count_goods_1 > 0)
				{
					do
					{
						cout << "Введите кол-во Игрушечная машинка: ";
						cin >> count_contain_goods;

						if (count_contain_goods > count_goods_1)
						{
							cout << "\nВНИМАНИЕ! Введеное значение превышает остатки. Введите снова.\n\n";
						}
						else if (count_contain_goods < 0)
						{
							cout << "\nВНИМАНИЕ! Не корректное значение. Введите снова.\n\n";

						}
		
					} while (count_contain_goods > count_goods_1 || count_contain_goods < 0);
					
					cout << "\n";
					total_amount_1 = toy_car * count_contain_goods; 
					total_amount += total_amount_1;
					count_goods_1 = count_goods_1 - count_contain_goods;
				}
				else
				{
					cout << "ТОВАРА Игрушечная машинка НЕТ В НАЛИЧИИ!\n";
					cout << "Остаток: " << count_goods_1 << "\n";
					system("pause");
					continue;
				}
				break;



			case (2):
				if (count_goods_2 > 0)
				{
					do
					{
						cout << "Введите кол-во Кукла: ";
						cin >> count_contain_goods;

						if (count_contain_goods > count_goods_2)
						{
							cout << "\nВНИМАНИЕ! Введеное значение превышает остатки. Введите снова.\n\n";
						}
						else if (count_contain_goods < 0)
						{
							cout << "\nВНИМАНИЕ! Не корректное значение. Введите снова.\n\n";

						}

					} while (count_contain_goods > count_goods_2 || count_contain_goods < 0);

					cout << "\n";
					total_amount_2 = doll * count_contain_goods;
					total_amount += total_amount_2;
					count_goods_2 = count_goods_2 - count_contain_goods;
				}
				else
				{
					cout << "ТОВАРА Кукла НЕТ В НАЛИЧИИ!\n";
					cout << "Остаток: " << count_goods_2 << "\n";
					system("pause");
					continue;
				}
				break;



			case (3):
				if (count_goods_3 > 0)
				{
					do
					{
						cout << "Введите кол-во Плюшевый мишка: ";
						cin >> count_contain_goods;

						if (count_contain_goods > count_goods_3)
						{
							cout << "\nВНИМАНИЕ! Введеное значение превышает остатки. Введите снова.\n\n";
						}
						else if (count_contain_goods < 0)
						{
							cout << "\nВНИМАНИЕ! Не корректное значение. Введите снова.\n\n";

						}

					} while (count_contain_goods > count_goods_3 || count_contain_goods < 0);

					cout << "\n";
					total_amount_3 = mishka * count_contain_goods;
					total_amount += total_amount_3;
					count_goods_3 = count_goods_3 - count_contain_goods;
				}
				else
				{
					cout << "ТОВАРА Плюшевый мишка НЕТ В НАЛИЧИИ!\n";
					cout << "Остаток: " << count_goods_3 << "\n";
					system("pause");
					continue;
				}
				break;



			case (4):
				if (count_goods_4 > 0)
				{
					do
					{
						cout << "Введите кол-во Новогодний Дождик: ";
						cin >> count_contain_goods;

						if (count_contain_goods > count_goods_4)
						{
							cout << "\nВНИМАНИЕ! Введеное значение превышает остатки. Введите снова.\n\n";
						}
						else if (count_contain_goods < 0)
						{
							cout << "\nВНИМАНИЕ! Не корректное значение. Введите снова.\n\n";

						}

					} while (count_contain_goods > count_goods_4 || count_contain_goods < 0);

					cout << "\n";
					total_amount_4 = dozdik * count_contain_goods;
					total_amount += total_amount_4;
					count_goods_4 = count_goods_4 - count_contain_goods;
				}
				else
				{
					cout << "ТОВАРА Новогодний Дождик НЕТ В НАЛИЧИИ!\n";
					cout << "Остаток: " << count_goods_4 << "\n";
					system("pause");
					continue;
				}
				break;

			case (5):        
				break;    

			case (6):        
				cout << "\n-------До свидания-------\n"; 
				return 0;    


			default:
				cout << "ВНИМАНИЕ! Такого товара нет в списке\n";
				continue;
			}



			cout << "\nЕсть ещё товары на кассе? \n";
			cout << "1 - да \n";
			cout << "0 - нет \n";
			cin >> answer_id;

		}

		if (total_amount >= 1000 && total_amount < 2500) // скида 5% при сумме в чеке от 1000 руб
		{
			total_amount = total_amount - total_amount * 0.05;
			cout << "\nСумма покупки, скидка 5%: " << total_amount << " руб\n";
			system("pause");
		}
		else if (total_amount > 1000 && total_amount >= 2500) // скида 10% при сумме в чеке от 2500 руб
		{
			total_amount = total_amount - total_amount * 0.10;
			cout << "\nСумма покупки, скидка 10%: " << total_amount << " руб\n";
			system("pause");
		}
		else
		{
			cout << "\nСумма покупки: " << total_amount << " руб\n";
			system("pause");
		}

		store_revenue += total_amount;

		cout << "\nВыручка магазина: " << store_revenue << " руб\n";


		cout << "\nОбслужить ещё одного клиента? \n";
		cout << "1 - да\n";
		cout << "0 - нет\n";
		cin >> answer_id;
		total_amount -= total_amount;


	}

	cout << "\n-------До свидания-------\n";


	return 0;

}