﻿// 13_02_23 _01 (функции)
// 
// теория
//
//чтобы код выполнялся несколько раз нужна функция, она
//нужна чтобы пользоваться вынесенным кодом
//способы написания функции:
//функция состоит из: возвращаемое значение имя функции (параметры) и ниже неё - код
//1 способ: после библиотек, до функции MAIN
//параметры (аргументы)- входные данные, которые необходимы функции для работы с кодом, если они не нужны, то пустые скобки
//возвращаемое значение - то что хотим вернуть, int, char, void( если ничего не возвращмет) - результат вычислений, который пригодится в дальнейшем
//синтаксис вызова функции: необходимо вызвать функцию прямо там где собрались вызвать
// 
//int res = имя функции (параметры П1, П2, П3);
//если int то он должен быть с обеих сторон (тип данных должен быть одинаковым)
//при вызове функции необх указывать столько аргументов, сколько указывали ранее
//оператор возврата return нужен для возврата функции (пишется в теле функции)
// без return будет ошибка компиляции, т.к. нет выхода из функции
//опператоров возврата мб несколько, но сработает первый

#include <iostream>
#include <cmath>
using namespace std;

////1)
//void Hello()// новая функция, которая ничего не возвращает
//{
//    cout << "Hello World"<<"\n";
//    return;
//        
//}

//2)
int Sqrt(int numb, int sqr)
{
    int res = pow(numb, sqr);
    return res;
}

int main()
{
    //1)
    //char hello = Hello();//неправильная запись, т.к. есть VOID
    //Hello();// правильная запись
    //Hello();
    //Hello();
   
    //2)
    setlocale(LC_ALL, "Rus");
    int number1 = 0, number2 = 0;
    cout << "тест функции возведения в квадрат 1.0" << "\n";
    cout << "Ввеите число для возведения в степень" << "\n";
    cin >> number1;
    cout << "Введите степень" << "\n";
    cin >> number2;

    int result = Sqrt(number1, number2);
    cout << "Результат вычислений равен: " << result<<"\n";
}



