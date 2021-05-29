#include <iostream>
#include <math.h>
using namespace std;

float f(float x) { return (x * x - 25); }

int main()
{
    system("cls");
    int itr = 0, maxItr;
    float x, b, a, allerr, x1;
    cout << "\nEnter the values of a,b,allowed error and maximum itration : ";
    cin >> a >> b >> allerr >> maxItr;

    x = (a+b)/2;
    itr++;
    cout << "Itration no. " << itr << " = " << x << "\n";
    do
    {
        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        x1 = (a+b)/2;
        itr++;
        cout << "Itration no. " << itr << " = " << x << "\n";
        if (fabs(x1 - x) < allerr)
        {
            cout << "After " << itr << " itration,root = " << x1;
            return 0;
        }
        x = x1;
    } while (itr < maxItr);

    cout << "NOT found"<< "\n";
    return 0;
}