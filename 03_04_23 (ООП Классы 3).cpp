// 03_04_23 (ООП Классы 3)
//
// ПРИМЕР:
//
// класс "User"

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

int main()
{
	setlocale(LC_ALL, "Rus");

	User user1;

	user1.getSalary(138.5, 168, 1.15);


}

