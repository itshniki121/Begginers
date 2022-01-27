#include <iostream>
using namespace std;
float a, b, c;
char d;
int p;
int main()
{//Подключение русского языка в программе
    setlocale(LC_ALL, "Russian");                              
    while (p != 2)
    {
        cout << "1 = Калькулятор \n 2 - Ответ \n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            cout << "Первое число ";
            cin >> a;
            cout << "Знак ";
            cin >> d;
            cout << "Второе число ";
            cin >> b;
            if (d == '+')
                c = a + b;
            if (d == '-')
                c = a - b;
            if (d == '*')
                c = a * b;
            if (d == '/')
                c = a / b;
        }
        case 2:
        {
            break;
        }
        }
        cout << "Ответ =" << c << endl;
    }
}