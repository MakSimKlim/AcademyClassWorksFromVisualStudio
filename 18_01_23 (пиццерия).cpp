#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Rus");

    int pizzaId = 0, drinkId = 0, countPizza = 0, countDrink = 0;


    float pizzaFourCheez = 450, pizzaBekon = 400, pepperoni = 350, Margarita = 200;

    float orangeJuce = 70, limeJuse = 60, tea = 40;

    float sumOrder = 0, sumPizza = 0, sumDrink = 0;

    cout << "********ДоДо-Пицца********" << endl;

    cout << "=====================================" << endl;
    cout << "Выберите пиццу (укажите номер): " << endl;
    cout << "1 - Четыре сыра - 450" << endl;
    cout << "2 - Бекон - 400" << endl;
    cout << "3 - Пепперони - 350" << endl;
    cout << "4 - Маргарита - 200" << endl;
    cin >> pizzaId;

    cout << "Введите количество заказанных пицц: " << endl;
    cin >> countPizza;

    cout << "Выберите напиток (укажите номер): " << endl;
    cout << "1 - Апельсиновый сок - 70" << endl;
    cout << "2 - Лайм - 60" << endl;
    cout << "3 - Чай (ассортимент) - 40" << endl;
    cin >> drinkId;

    cout << "Введите количество напитков: " << endl;
    cin >> countDrink;

    switch (pizzaId)
    {
    case 1:
        if (countPizza > 4 )
        {
            sumPizza = pizzaFourCheez * (countPizza - (countPizza/5));
            cout << "Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = pizzaFourCheez * countPizza;            
        }
        break;
    case 2:
        if (countPizza > 4 )
        {
            sumPizza = pizzaBekon * (countPizza - (countPizza/5));
            cout << "Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = pizzaBekon * countPizza;
        }
        break;
    case 3:
        if (countPizza > 4 )
        {
            sumPizza = pepperoni * (countPizza - (countPizza/5));
            cout << "Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = pepperoni * countPizza;
        }
        break;
    case 4:
        if (countPizza > 4 )
        {
            sumPizza = Margarita * (countPizza - (countPizza/5));
            cout << "Каждая 5 пицца в подарок" << endl;
        }
        else
        {
            sumPizza = Margarita * countPizza;
        }
        break;
    default:
        cout << "Такой пиццы у нас нет";
        break;
    }

   // switch (drinkId)
   // {
   // case (1):
   //     sumDrink = orangeJuce * countDrink;
   //     break;
   // case (2):
   //     sumDrink = limeJuse * countDrink;
   //     break;
   // case (3):
   //     sumDrink = tea * countDrink;
   //     break;
   // default:
   //     cout << "Такого напитка у нас нет";
   //     break;
   // }

   // sumOrder = sumPizza + sumDrink;
   // 
   ////cout << "Сумма заказа: " << sumOrder << " руб" << endl;


   // if (sumOrder >= 1500)
   // {
   //             cout << "сумма заказа со скидкой 20%: " << sumOrder * 0.8 << " руб" << endl;

   // }
   // else
   // {
   //     cout << "сумма заказа: " << sumOrder << " руб" << endl;
   // } 


   // system("pause");

   // return 0;

}