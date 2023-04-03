// 03_04_23 (ООП Классы 4)
//
//вывод метода за пределы класса


#include <iostream>
#include <Windows.h> // for string

using namespace std;

class User
{
public:

	void getSalary(float priceHours, int hours, float ratioUral)//функция обработчик напиписанная нами, вызывает расчет из скрытого метода
		//то что в скрытом методе, никто не видит
	{
		float result = countSalary(priceHours, hours, ratioUral);

		cout << result;
	}
	
	void getName(string name);

private:

	// переменные
	int id;//id пользователя (цифровой)
	string password;
	string email;
	unsigned short cvc;
	string login;
	string first_name;
	string last_name;
	float priceHours;
	int hours;
	float ratioUral;

	float countSalary(float priceHours, int hours, float ratioUral)// метод подсчета зарплаты в скрытом методе (скрыт от остальных)
	{
		float salary = priceHours * hours * ratioUral;

		return salary;
	}
};

void User::getName(string name) // функция вынесенная за класс
{
	cout << name << "\n";
}

int main()
{
	setlocale(LC_ALL, "Rus");

	User user1;

	string name = "Василий";

	user1.getName(name);

	user1.getSalary(138.5, 168, 1.15);
}

