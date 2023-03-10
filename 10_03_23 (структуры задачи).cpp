// 10_03_23 (структуры задачи)
//
// Разработать структуру, которая описывает животное
// (название, класс, кличка).
// Создать функции для работы с этой структурой:
// - заполнение объекта
// - вывод на экран данных об объекте
// - функции "подать голос"

#include <iostream>
#include <time.h>

using namespace std;

struct Animal                        // структура это тип данных!!!
{
	string nameAnimal;               // поля, которые будем задавать по ходу программы
	string typeAnimal;
	string nicknameAnimal;
	string voiceAnimal;
};

//передача структуры в функцию "заполнение объекта"(Enimal - тип данных, item - аргумент)
void FillingAnimal(Animal item) {
	cout << "Название животного: " << item.nameAnimal << "\n"; //через точку показываем с какого поля достать инфу
	cout << "Класс животного: " << item.typeAnimal << "\n";
	cout << "Кличка животного: " << item.nicknameAnimal << "\n";
	cout << "Голос животного: " << item.voiceAnimal << "\n";
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));


	cout << "Программа ЖЫВОТНОЕ :)" << "\n" << "\n";

	int animalId = 0;

	cout << "Выберите животное: "<<"\n";
	cout << "1 - Кошка" << "\n";
	cout << "2 - Рыба" << "\n";
	cout << "3 - Муравей" << "\n";

	cin >> animalId;
	cout << "\n";

	while (animalId < 1 || animalId>3)
	{
		cout << "Выбор неправильный, повторите выбор" << "\n";
		cin >> animalId;
	}

	switch (animalId)
	{
	case 1:
	{
		Animal choice1;
		choice1.nameAnimal = "Кошка";
		choice1.typeAnimal = "Млекопитающие";
		choice1.nicknameAnimal = "Барсик";
		choice1.voiceAnimal = "Мяу";
		FillingAnimal(choice1);
		break;
	}
	case 2:
	{
		Animal choice2;
		choice2.nameAnimal = "Рыба";
		choice2.typeAnimal = "Водные";
		choice2.nicknameAnimal = "Фиш";
		choice2.voiceAnimal = "Молчание";
		FillingAnimal(choice2);
		break;
	}
	case 3:
	{
		Animal choice3;
		choice3.nameAnimal = "Муравей";
		choice3.typeAnimal = "Насекомые";
		choice3.nicknameAnimal = "Ант";
		choice3.voiceAnimal = "Феромоны";
		FillingAnimal(choice3);
		break;
	}
	default:
		break;
	}

	

	return 0;
}
