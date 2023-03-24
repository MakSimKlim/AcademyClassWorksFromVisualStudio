//#include <fstream>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "RUSSIAN");
//
//    //Создаем файловый поток и связываем его с файлом
//    ifstream in("D:/Климов/мои проги/!AcademyWorks/TestFileForOpenInCPP.txt");
//
//    if (in.is_open())
//    {
//        //Если открытие файла прошло успешно
//
//        //Вначале посчитаем сколько чисел в файле
//        int count = 0;// число чисел в файле
//        int temp;//Временная переменная
//
//        while (!in.eof())// пробегаем пока не встретим конец файла eof
//        {
//            in >> temp;//в пустоту считываем из файла числа
//            count++;// увеличиваем счетчик числа чисел
//        }
//
//        //Число чисел посчитано, теперь нам нужно понять сколько
//        //чисел в одной строке
//        //Для этого посчитаем число пробелов до знака перевода на новую строку
//
//        //Вначале переведем каретку в потоке в начало файла
//        in.seekg(0, ios::beg);
//        in.clear();
//
//        //Число пробелов в первой строчке вначале равно 0
//        int count_space = 0;
//        char symbol;
//        while (!in.eof())//на всякий случай цикл ограничиваем концом файла
//        {
//            //теперь нам нужно считывать не числа, а посимвольно считывать данные
//            in.get(symbol);//считали текущий символ
//            if (symbol == ' ') count_space++;//Если это пробел, то число пробелов увеличиваем
//            if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
//        }
//        //cout << count_space << endl;
//
//        //Опять переходим в потоке в начало файла
//        in.seekg(0, ios::beg);
//        in.clear();
//
//        //Теперь мы знаем сколько чисел в файле и сколько пробелов в первой строке.
//        //Теперь можем считать матрицу.
//
//        int n = count / (count_space + 1);//число строк
//        int m = count_space + 1;//число столбцов на единицу больше числа пробелов
//        double** x;
//        x = new double* [n];
//        for (int i = 0; i < n; i++) x[i] = new double[m];
//
//        //Считаем матрицу из файла
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < m; j++)
//                in >> x[i][j];
//
//        //Выведем матрицу
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//                cout << x[i][j] << "\t";
//            cout << "\n";
//        }
//
//        for (int i = 0; i < n; i++) delete[] x[i];
//        delete[] x;
//
//        in.close();//под конец закроем файла
//    }
//    else
//    {
//        //Если открытие файла прошло не успешно
//        cout << "Файл не найден.";
//    }
//
//    system("pause");
//    return 0;
//}

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::cout;

void splitString(const string& fullstr,
    vector<string>& elements,
    const string& delimiter) {

    string::size_type lastpos =
        fullstr.find_first_not_of(delimiter, 0);
    string::size_type pos =
        fullstr.find_first_of(delimiter, lastpos);

    while ((string::npos != pos) || (string::npos != lastpos)) {

        elements.push_back(fullstr.substr(lastpos, pos - lastpos));

        lastpos = fullstr.find_first_not_of(delimiter, pos);
        pos = fullstr.find_first_of(delimiter, lastpos);
    }
}

double stringToDouble(const string& str) {

    istringstream stm;
    double val = 0;

    stm.str(str);
    stm >> val;

    return val;
}

void readData(const string& filename,
    const string& csvdelimiter,
    vector< vector<double> >& sarr) {

    ifstream fin(filename.c_str());

    string s;
    vector<string> selements;
    vector<double> delements;

    while (!fin.eof()) {

        getline(fin, s);

        if (!s.empty()) {

            splitString(s, selements, csvdelimiter);

            for (size_t i = 0; i < selements.size(); i++) {

                delements.
                    push_back(stringToDouble(selements[i]));
            }

            sarr.push_back(delements);
            selements.clear();
            delements.clear();
        }
    }

    fin.close();
}

int main(int argc, char** argv) {

    vector< vector<double> > sarr;

    readData("D:/Климов/мои проги/!AcademyWorks/TestFileForOpenInCPP2.csv", ";", sarr);

    for (size_t i = 0; i < sarr.size(); i++) {

        for (size_t j = 0; j < sarr[0].size(); j++) {

            cout << sarr[i][j] << "\t";
        }

        cout << "\n";
    }

    return 0;
}