// bai9_GiaiPTBac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    std::cout << "GIAI PHUONG TRINH BAC 2: ax^2 + bx + c = 0\n";
    int a, b, c;
    double dt, x1, x2;
    cout  << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Nhap c; "; cin >> c;

    if (a == 0)
    {
        // Chuyen phuong trinh bac 2 ve pt bac 1 bx+c=0 và giai
    }
    else {
        // a khac 0
        dt = b * b - 4 * a * c;
        if (dt < 0)
        {
            cout << "Phuong trinh vo nghiem\n";
        }
        else if (dt == 0) {
            cout << "Phuong trinh co nghiem kep\n";
            x1 = -b / (2 * a);
            cout << "x1 = x2 = " << x1;
        }
        else {
            cout << "Phuong trinh co 2 nghiem phan biet\n";
            x1 = (-b + sqrt(dt)) / (2 * a);
            x2 = (-b - sqrt(dt)) / (2 * a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }


    }




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
