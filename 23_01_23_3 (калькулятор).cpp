// Academy_23_01_23_1.cpp 
// Программа создания калькулятора

#include <iostream>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Rus");
	double x = 0, y = 0, result = 0;
	char operation;
	int answer = 0;

	cout << "********Calculator 1.0********" << endl;

	while (answer != 1)
	{
		cout << "Enter first operand: " << endl;
		cin >> x;
		cout << "Enter second operand: " << endl;
		cin >> y;
		cout << "Take operation: " << endl;
		cin >> operation;
		cout << R"(Take operation :
     + - slojenie
     - - vychitanie
     * - umnojenie
     / - delenie)" << endl;
		cin >> operation;

		switch (operation)
		{
		case '+':
			result = x + y;
			cout << "Resultat vy4islenyi = " << result << endl;
			cout << R"(Hotite 4to-nibud eshe soschitat?
            0- yes
            1- no)" << endl;
			cin >> answer;
			break;
			//case '-':
			//	break;
			//case '*':
			//	break;
			//case '/':
			//	break;
			//}

		}

		system("pause");
		return 0;
	}
}

