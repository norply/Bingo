#include <iostream>// Для ввода-вывода
#include <Windows.h>// Для подключения русского языка
#include <conio.h>// Для определения нажатия клавиши
#include <vector>// Для использования векторов
#include <random>// Для генерации случайных чисел
#include <fstream>// Для ведения log файла
using namespace std;
int main()
{
    ofstream file("Bingo.log", ios_base::app);
    file << endl << endl << "Начало работы программы";
SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    setlocale(LC_CTYPE, "rus");
    std::random_device rd;
    std::mt19937 mersenne(rd());
    float n;// Число бочонков
    int rand;// Случайное число от 0 до n-1;
    file << endl << "Ввод числа бочонков";
     cout << "Введите число бочонков: ";
    for (;;)// Проверка ввода числа бочонков
    {
        cin >> n;
        if (!cin)
        {
            cout << "Введите число: ";
            file << endl << "Введено не число";
        }
        else
        {
            if (int(n) != n)
            {
                cout << "Введите целое число: ";
                file << endl << "Введено не целое число: " << n;
            }
             else
            {
                if (n <= 0)
                {
                    cout << "Введите положительное число: ";
                    file << endl << "Введено не положительное число: " << n;
                }
                 else
                {
                     file <<endl<< "Число бочонков: " << n;
                     break;
                 }
                 }
        }
        cin.clear();
        cin.ignore(1000000000, '\n');
    }
    vector<int> barrels(n);
    for (int i=1; i<=n; i++)//Заполняем вектор номерами бочонков
    {
        barrels[i - 1] = i;
    }
     while (n > 0)
    {
        rand = mersenne() % int(n);

        
            cout << endl << "Нажмите клавишу Enter, чтобы вытащить бочонок из мешка";
            if (_getch())
            {
                file << endl << "Пользователь нажал клавишу";
                
            }
        
        
        cout << endl<< "Выпал бочонок номер: "<< barrels[rand];
         file << endl << "Выпал бочонок номер: " << barrels[rand];
          barrels.erase(barrels.begin() + rand);
        n = n - 1;
    }
    file << endl << "Завершение работы программы";
 }
