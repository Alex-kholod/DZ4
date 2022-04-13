#include <iostream>
using namespace std;
double parametrT(double, double, double);
void error();

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, x;
    double y=0, t=0;

    cout << "Введите a и x " << endl;
    if (!(cin >> a >> x))
    {
        cout << "Ошибка ввода " << endl;
        return 0;
    }

    if (a <= x) 
    {
        if (x + a > 0)
            y = a + log(x + a);
        else
        {
            error();
            return 0;
        }
    }
    else
    {
        if (sin(a * x) >=0)
        {
            y = sqrt(sin(a * x));
        }
        else
        {
            error();
            return 0;
        }
           
    }
        

    t = parametrT(y,a,x);

    cout << "x = " << x << "\n" << "y = " << y << "\n" << "a = " << a << "\n" << "t = " << t << "\n" << endl;
    return 0;
}

double parametrT(double y, double a, double x)
{
    
    if (a > y)
    {
        return y / (a - x);
    }
    else if (a == y)
    {
        return (y / (a - x)) + ((a + x) / y * y);
    }
    else
    {
        return tan(a * x) + cos(2 * a * y);
    }
}

void error()
{
    cout << "Ошибка вычислений " << endl;
}