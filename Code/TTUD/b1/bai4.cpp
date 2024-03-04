#include <iostream>
#include <string>
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
        string s = to_string(c);
        cout << s.substr(0, 9);
    }
    return 0;
}