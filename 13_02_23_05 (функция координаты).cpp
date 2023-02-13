// 13_02_23_05 (функция координаты)
//
//
//написать фунцию, distance вычисляющую расстояние между двумя точками с координатами (х1,у1) и точкой (х2,у2)



#include <iostream>
#include <math.h>
#include <time.h>

    using namespace std;

//функция рассчета расстояния между точками
    void Distance ()
    {
        int rasst = 0;

       

        rasst = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2);

        cout << "расстояние между точками равно: " << rasst << "\n";
    }

    int main()
    {
        setlocale(LC_ALL, "Rus");

        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;

        cout << "введите х1, х2, у1, у2: " <<  "\n";
        cin >> x1;
        cin >> x2;
        cin >> y1;
        cin >> y2;


        Distance ()

    }
