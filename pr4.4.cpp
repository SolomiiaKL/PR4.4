// Lab_04_4.cpp
// Клак Соломія
// Лабораторна робота № 4.4
// Розгалуження, задане графіком функції.
// Варіант 14
#include <iomanip>
#include <cmath>
#include <iostream>
#include <Windows.h>


using namespace std;

int main()
{

    double x, xp, xk, dx, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "| Tablytsia znachen funktsiyi |" << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(8) << "x" << "   |"
        << setw(10) << "y" << "   |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < -4)
            y = -2;              
        else
            if (x < 0)
                y = x / 4;       
            else
                if (x < 2)
                    y = x * x;   
                else
                    y = (10 - x) / 2;   

        cout << "|" << setw(8) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "   |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
