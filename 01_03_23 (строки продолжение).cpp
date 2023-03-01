// 01_03_23 (строки продолжение)
//
//
//практические задачи на строки
//
//
//Задача 1. Дана строка символов. Заменить в ней все пробелы на табуляции
//
//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <iomanip>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(time(NULL));
//
//    string s1 = "В лесу родилась елочка";
//    string result = "";
//    while (s1.find(" ",0) != s1.npos)//npos - функция
//    {
//        result = s1.replace(s1.find(" "), 1, "\t");
//    }
//   
//    cout << result << "\n";
//
//    return 0;
//}
//
//
//
//Задача 2. Дана строка символов. Определить кол-во букв, цифр и остальных символов, присутствующих в строке
//
//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <iomanip>
//#include <cstring>
//#include <string>
//#include <ctype.h>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(time(NULL));
//
//    string s1 = "В лесу родилась елочка";
//    int countSymbol = 0, /*countNumber = 0,*/ countChar = 0;
//    string result = "";
//    
//    int stringSize = s1.length();
//
//    for (int i = 0; i < stringSize; i++)
//    {
//        if (s1[i] == ' ')
//        {
//            countSymbol += 1;
//        }
//        //else if (isdigit(s1[i]))
//        //{
//        //    countNumber += 1;
//        //}
//        else
//        {
//            countChar += 1;
//        }
//    }
//    cout << countSymbol << "\n";
//    //cout << countNumber << "\n";
//    cout << countChar << "\n";
//
//    return 0;
//}
//

//Задача 3/ Дана строка символов. Определить является ли строка полиндромом
//
//решение из интернета
//
#include <iostream>
#include <cstring>

using namespace std;

bool check_polindrom(string word)
{
	int len = word.length();
	for (int i = 0; i < len / 2; ++i)
	{
		if (word[i] != word[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string str;
	cout << "Enter the word: ";
	cin >> str;
	if (check_polindrom(str))
	{
		cout << "Word is polindrom.";
	}
	else
	{
		cout << "Word is not polindrom";
	}
	return 0;
}