#include <iostream>// Для ввода-вывода
#include <Windows.h>// Для подключения русского языка
#include <conio.h>// Для определения нажатия клавиши
#include <vector>// Для использования векторов
#include <random>// Для генерации случайных чисел
#include <fstream>// Для ведения log файла
using namespace std;
int main()
{
SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    setlocale(LC_CTYPE, "rus");
    float n;// Число бочонков
     cout << "Введите число бочонков: ";
    for (;;)// Проверка ввода числа бочонков
    {
        cin >> n;
        if (!cin)
        {
            cout << "Введите число: ";
        }
        else
        {
            if (int(n) != n)
            {
                cout << "Введите целое число: ";
            }
             else
            {
                if (n <= 0)
                {
                    cout << "Введите положительное число: ";
                }
                 else
                {
                     break;
                 }
                 }
        }
        cin.clear();
        cin.ignore(1000000000, '\n');
    }
 }
