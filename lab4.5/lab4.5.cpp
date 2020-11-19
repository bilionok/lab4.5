#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    double x, y, R;
    srand((unsigned)time(NULL));

    cout << "R = "; cin >> R;

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y >= -R && y <= R && x >= 0 && x <= y))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = -R + rand() * (R - (-R)) / RAND_MAX;
        y = -R + rand() * (R - (-R)) / RAND_MAX;
        if ((y >= 1 && y <= 3 && x >= -1 && x <= 1) ||
            (x * x + y * y <= 1) ||
            (y >= -2 && y <= x - 1 && y <= -x - 1))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }
    return 0;
}