// AcademyLesson1_1.cpp : Конструкция Switch Case альтернативная замена If Else
// Данил Обухов

#include <iostream>
#include <Windows.h>//подключаем библиотеку для того чтобы с pass работали русские буквы

using namespace std;

int main()
{
    
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251); //подключаем консоль для того чтобы с pass работали русские буквы
    SetConsoleOutputCP(1251); // Чтобы корректно выводились кодировки кирилицы
    int userNumber;

    // Пример тренарного оператора
    //string pass;    
    //cout << "Введите пароль: "; cin >> pass;
    //(pass == "Друг") ? cout << "Пароль верен.Входи" : cout << "Пароль неверен.Ты не пройдешь";

    
    //// пример ветвлений
    //// если писать подряд одни if то будем заходить в каждый if и тратить ресурсы, с else заходим до того момента пока не сойдется условие
    //cout << "Введите число: "; cin >> userNumber;
    //if (userNumber<10)
    //{
    //    cout << "Вы ввели число меньше 10";
    //}
    //else if (userNumber == 10)
    //{
    //    cout << "Вы ввели число равное 10";
    //}
    //else
    //{
    //    cout << "Вы ввели число больше 10";
    //}



    // задача
   // польз вводит целое число, если число >0, то прибавляем единицу, если пользователь вводит отрицатеьное число, то от этого числа вычитаем 2
    cout << "Введите число: "; cin >> userNumber;
    if (userNumber > 0)
    {
        userNumber++;
    }
        else
    {
        userNumber -=2;
    }
    cout << "Число= " << userNumber;



    ////cout << "Введите желаемое число: "; cin >> userNumber;    
    //// примеры конструкции if/else
    //if (userNumber == 0 && userNumber == 4)
    //{

    //}

    //   if (userNumber == 0 || userNumber == 4)
    //   {

    //   }



    //   //пример конструкции цикла
    ////cout << "Введите желаемое число: "; cin >> userNumber;
    //   while (userNumber < 7)
    //   {
    //   }
    

    // Тренарный оператор
    //ДЛя оптимизации кода заменяет структуру if/else, то есть ?=if, :=else
    //cout << "Введите желаемое число: "; cin >> userNumber;
    //(userNumber % 2 == 0) - обязательно нужно сравнивать с чем-то, т.к. это типо if
    //(userNumber % 2 == 0) ? cout << "Вы ввели четное число" : cout << "Вы ввели нечетное число";
    
    

    ////Конструкция Switch Case ещё одна альтернативная замена If Else, но с точным условием
    ////cout << "Введите желаемое число: "; cin >> userNumber;
    //switch (userNumber)
    //{
    //    case (2):
    //        cout << "Вы ввели цифру 2";
    //        break;
    //    case (3):
    //        cout << "Вы ввели цифру 3";
    //        break;
    //    default:
    //        cout << "Такого числа в инcтрукции нет";
    //        break;
    //}
    
    
    system("pause");

    return 0;
}


