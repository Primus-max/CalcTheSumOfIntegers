// Напишите программу, которая вычисляет сумму целых
// чисел от а до 500 (значение a вводится с клавиатуры).

#include <iostream>
#include<windows.h>
using namespace std;


int main()
{
    SetConsoleCP(12510);
    SetConsoleOutputCP(1251);    

    int userInputA;
    cout << "Помогу найти сумму целых чисел от а до 500, введите чему равно а: " ;
    cin >> userInputA;

    // Проверка на корректность ввода
    while (true) 
    {
        // Проверка на корректность введенного значения a
        if (userInputA > 500) 
            cout << "Некорректное значение a. Введите значение от a до 500, (a  не может быть больше 500)" << endl;
        else
            break; // Возврат кода ошибки
        
   }

    int accum = 0;
    // Вычисление суммы целых чисел от a до 500
    for (int i = userInputA; i <= 500; ++i) {
        accum += i;
    }

    cout << "Сумма целых чисел от " << userInputA  << " до 500: " << accum << endl;

}
