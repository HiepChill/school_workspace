#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long a, b;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    long long c = pow(a, b);
    if (c <= pow(10, 9))
        cout << c;
    else
    {
        c = c % 1000000000;
        cout << c;
    }
    return 0;
}
