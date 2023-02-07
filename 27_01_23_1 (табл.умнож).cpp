// Academy_28_01_23.cpp : 
// Проверка пользователя на знание таблицы умножения

#include <iostream>
#include <time.h>//библиотека для рандомайзера
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

   

       // Установить начальную точку генерирования последовательности
      // использовать функцию time(NULL)
    
    srand(time(NULL));

    int result{ 0 }, answer{ 0 }, countRepeat{ 10 }, countGoodAnswer{ 0 };

    cout << "Программа проверки знаний таблицы умножения" << endl << endl;



    while (countRepeat != 0)
    {
        if (countRepeat == 10 && countRepeat >= 7)
        {
            int number1{ 1 + rand() % 10 }, number2{ 1 + rand() % 10 };
            cout << "Ответьте на вопрос. Каким будет результат умножения?: " << number1 << " x " << number2 << "\n";
            
           
            
            cin >> answer;

            Sleep(10000);

            result = number1 * number2;


            if (result == answer)
            {
                countGoodAnswer += 1;
                cout << "Вы ответили верно. ";
            }
            else
            {
                cout << "К сожелению ответ неправильный. Увы и ах =( " << "\n";
            }
            
            countRepeat--;
        }
        //countRepeat--;
    }
        cout << countGoodAnswer << "\n";        
        if (countGoodAnswer >= 8)
        {
            cout << "Вы знаток!";
        }
        else if (countGoodAnswer >= 5 && countGoodAnswer < 8)
        {
            cout << "Хороший результат!";
        }
        else if (countGoodAnswer < 5)
        {
            cout << "Вы неудачник!"<<"\n";
        }

                
    system("pause");

    return 0;
    
}

