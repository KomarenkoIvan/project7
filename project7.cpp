#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(10) << right << showpos << 4 << noshowpos << endl;
    cout << setw(1) << left << "-" << setw(14) << right << fixed << setprecision(2) << 99.54321 << endl;
    cout << setw(10) << right << showpos << 777 << noshowpos << endl;
    cout << left << "8a1" << endl;
    cout << left << fixed << setprecision(2) << -121.0 << endl;
    cout << left << showpos << 1 << 24 << noshowpos << endl;

    return 0;
}