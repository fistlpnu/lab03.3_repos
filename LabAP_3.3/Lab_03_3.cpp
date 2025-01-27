﻿// Lab_03_3.cpp
// < Захарчук Олександр Анатолійович >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 11
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // Перша частина: від -∞ до -1-R (лінійна з нахилом 45°)
    if (x < -1 - R)
        y = (x + 1 + R);
    // Дуга (частина кола) від -1-R до -1
    else if (x >= -1 - R && x < -1)
        y = sqrt(R * R - (x + 1) * (x + 1));
    // Горизонтальна частина від -1 до 1
    else if (x >= -1 && x < 1)
        y = R;
    // Похилі лінії від 1 до 2 (лінійний спад)
    else if (x >= 1 && x < 2)
        y = R - (R / 1) * (x - 1);
    // Горизонтальна частина від 2 до ∞
    else
        y = -1;

    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
