// Academy_23_01_23
// 
//ввод 5 оценок
//определить допуск к экз
//допуск если средний бал > 4

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int grade = 0, contain = 0, sumGrade = 0, countGrade = 5;//, grade1 = 0, grade2 = 0, grade3 = 0, grade4 = 0;
    float result = 0;

    cout << "************Допуск ++ **************" << endl;
    
    for (int j = 1; j <= countGrade; j++)
    {
        cout << "Введите " << j << "оценку: " << endl;
        
        cin >> grade;

        contain += grade;

        sumGrade = contain;
               
    }

    result = sumGrade / countGrade;

    cout << typeid(result).name() << endl;//проверка типа переменной (в данном случае переменной "result")

    if ((int)result >= 4 )
    {
        cout << "Студент допущен. Средняя оценка: " << result << endl;
    }
    else
    {
        cout << "Студен не допущен";
    }

    system("pause");

    return 0;
}
