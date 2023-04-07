// 07_04_23.cpp 
//
//
//Конструктор в классах
//
//


class Elevator
{
public:
	Elevator(double e_speed, int e_capacity)//конструктор 
	{
		speed = e_speed;
		capacity = e_capacity;
	}

	bool startElevator(int check) //метод возвращение текущего состояния лифта (работает)
	{
		togle = true;
		return togle;
	};
	bool stopElevator(int check) //метод возвращение текущего состояния лифта (не работает)
	{
		togle = false;
		return togle;
	};

private:
	int floors[12]{ -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//диапазон 
	bool togle; // вкл или выкл

	double speed; // переменные для Elevator
	int capacity; // переменные для Elevator
};


//объявление объекта с конструктором
// Elevator elevator(10.0;20)