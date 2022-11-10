#include <iostream>
using namespace std;

double setValue(const char v[]);

int main()
{
    double epsula;
    double x;

    do
    {
        epsula = setValue("epsula");
    } while (epsula < 0);

    do
    {
        x = setValue("x");
    } while (x <= 0.0 || x == 4.0);

    double t = sqrt(x) / 2;
    double y = 4 / (4 - x);
    double func = y * (1 + t * sqrt(y) * asin(t));

    unsigned int i = 0;
    double a = 1;
    double halfX = x / 2;

    //func -= a;

    /*if (abs(func - a) >= epsula)
    {
        cout << "i = " << i << endl;
        return 0;
    }*/
        // Here
    /*do
    {
        i++;
        a = a * halfX * i / (2 * i - 1);
        func -= a;
        cout << "i = " << i << endl;
    } while (abs(func) < epsula);*/

    if (abs(func - a) >= epsula)
    {
        cout << "i = " << i << endl;
        return 0;
    }
    else
    {
        while (abs(func) < epsula)
        {
            func = func - a;
            i++;
            a = a * halfX * i / (2 * i - 1);
            cout << "i = " << i << endl;
        }

        //do
        //{
        //    func = func - a;
        //    i++;
        //    a = a * halfX * i / (2 * i - 1);
        //    cout << "i = " << i << endl;
        //} while (abs(func) < epsula);
    }
}

double setValue(const char v[])
{
    int error;
    double value;
    do
    {
        error = 0;
        cout << "Please enter " << v << " = ";
        cin >> value;
        if (cin.fail())
        {
            cout.clear();
            cout << "Please enter a valid number" << endl;
            error = 1;
            cin.clear();
            cin.ignore(80, '\n');
        }
    } while (error == 1);

    return value;
}



//while (abs(func) < epsula)
//{
//    /*if (abs(func) >= epsula)
//        break;*/
//    i++;
//    a = a * halfX * i / (2 * i - 1);
//    func = func - a;
//    cout << "i = " << i << endl;
//}
