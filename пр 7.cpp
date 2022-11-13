#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    float Y, Z, x, y, sum, mult;
    int i, n;
    i = 1;
    n = 1;
    sum = 0;
    mult = 1;

    cout << "Sum" << endl;
    cout << "Enter x: ";
    cin >> x;

    for (i; i < 6; i++)
    {
        sum = sum + pow(i, 2.);
    }
    Y = (sum + sin(x * M_PI / 180.)) / (pow(x, 2.) + 5.);
    cout << "Result: " << endl;
    cout << "Y sum = " << Y << endl;

    cout << "" << endl;

    cout << "Multiplication" << endl;
    cout << "Enter y: ";
    cin >> y;

    for (n; n < 6; n++)
    {
        mult = mult * n;
    }
    Z = mult + 2. * sin(y * M_PI / 180.);
    cout << "Result: " << endl;
    cout << "Z mult = " << Z << endl;

    system("pause");
    return 0;
}

