// 27_02_23 (строки)
//
//char, string - строчные типы данных 
//char появился первее
//char  заимствован из С
//string - более удобный и усовершенствованный класс
//char не удаляют и не заменяют на string, т.к. на char написано много библиотек ранее
//char более примитивен и более понятен также 
//
//
//Строки могут быть переменными и константами


//
// << и >>  операторы ввода/вывода
// char занимает 1 байт (8 бит)
//  \0 - команда для компилятора, что строка кончилась
//   
 // если пользователь введет больше строк чем размер массива, то всё может вывалиться из массива и всё сломать
       // т.к. нет сборщика мусора. Если что-то попадает в массив и выходит за его пределы, то всё всёравно остается в памяти
       // Это больше, чем нужное может прилететь в пустую переменную, которую мы думали что она нулевая
       // 
       // 

//ограничение пользователя размером строки:
   //#include <iostream>
   //#include <time.h>
   //#include <Windows.h>
   //#include <iomanip>

   //using namespace std;


   //int main()
   //{
   //    setlocale(LC_ALL, "Rus");
   //    SetConsoleCP(1251);
   //    SetConsoleOutputCP(1251);

   //    srand(time(NULL));
   //    const int maxSize = 20;//ограничение пользователя по размеру строки = 80

   //    char str[maxSize]; //всё что больше 20 удаляется

   //    // Защита от переполнения буфера:
   //    cin >> setw(maxSize) >> str;
   //    cout << "Вы ввели: " << str << "\n";

   //}

//=====================================================================================

//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <iomanip>
//
//using namespace std;
//
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(time(NULL));
//
//    char str[] = "я памятник себе воздвиг нерукотворный";
//    //если была бы размерность, лишнее отрезается
//    //пробелы это окончание строки
//    cout << str << "\n";
//
//}

//=====================================================================================
   //#include <iostream>
   //#include <time.h>
   //#include <Windows.h>
   //#include <iomanip>

   //using namespace std;


   //int main()
   //{
   //    setlocale(LC_ALL, "Rus");
   //    SetConsoleCP(1251);
   //    SetConsoleOutputCP(1251);

   //    srand(time(NULL));

   //    const int maxSize = 10;//ограничение пользователя по размеру строки = 80

   //    char str[maxSize]; //всё что больше 9 удаляется, 1 место всегда под \0

   //    cout << "Введите строку:"<<"\n";
   //    cin.get(str,maxSize);//метод get - 1 аргумент массив пользователя, 2- размерность
   //    //в этом случае массив 79 символов вместе с пробелами
   //    //для get нужна только std библиотека
   //    cout << "Вы ввели: " << str << "\n";

   //}
   //=====================================================================================
//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <iomanip>
//
//   using namespace std;
//
//
//   int main()
//   {
//       setlocale(LC_ALL, "Rus");
//       SetConsoleCP(1251);
//       SetConsoleOutputCP(1251);
//
//       srand(time(NULL));
//
//       const int maxSize = 2000;//ограничение пользователя по размеру строки = 80
//
//       char str[maxSize]; 
//
//       cout << "Введите строку:" << "\n";
//       //копирование строк
//       cin.get(str, maxSize,'$');//метод get - 1 аргумент массив пользователя, 2- размерность
//       //'$' - любой символ, выводящий строку полностью с пунктуацией и переносами на следующую строку
//       //в этом случае массив 79 символов вместе с пробелами
//       //для get нужна только std библиотека
//       cout << "Вы ввели: " << str << "\n";
//
//   }
   //=====================================================================================
//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <iomanip>
//
//using namespace std;
//
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(time(NULL));
//    
//    char str[] = "я памятник себе воздвиг нерукотворный";
//    const int maxSize = 10;
//    char str2[maxSize];
//
//    // копирование строк
//    for (int i = 0; i <= strlen(str); i++)//strlen - функция, которая возвращает длину строки
//    {
//        str2[i] = str[i];
//    }
//    cout << str2 << "\n";
//
//    return 0;
//}
//=====================================================================================
//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <iomanip>
//#include <cstring>
//
//using namespace std;
//
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(time(NULL));
//    const int maxSize = 80;
//
//    char str[] = "я памятник себе воздвиг нерукотворный";
//    
//    char str2[maxSize];
//
//    // копирование строк ещё вариант
//
//    strcpy_s(str2, str);//str2 - куда копируется, str - откуда копируется
//
//    cout << str2 << "\n";
//
//    return 0;
//}
//=====================================================================================
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <cstring>

using namespace std;

// массивы строк

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    const int DAYS = 7;//кол-во строк
    const int max = 12;//кол-во символов в строке (в данном случае в слове)

    char days[DAYS][max] = //двумерный массив
        {
        "Понедельник", "Вторник", "Среда","Четверг", "Пятница","Суббота","Воскресенье"
        };
    for (int i = 0; i < DAYS; i++)
    {
        cout << days[i] << "\n";//здесь только один индекс, 
        //т.к. нужна только строка с её содержимым
    }
    return 0;
}
