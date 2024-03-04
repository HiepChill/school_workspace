#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<long long, long long> nhap;

long long f(long long n)
{
    if (n <= 2)
        return n;
    if (nhap.count(n) != 0)
        return nhap[n];
    if (n % 3 == 0)
        nhap[n] = f((n / 3) * 2);
    if (n % 3 == 1)
        nhap[n] = f(2 * (n - 1) / 3) + f(2 * (n - 1) / 3 + 1);
    if (n % 3 == 2)
        nhap[n] = f(2 * (n - 2) / 3) + f(2 * (n - 2) / 3 + 1) + f(2 * (n - 2) / 3 + 2);
    return nhap[n];
}

int main()
{
    long long n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "f(" << n << ") = " << f(n);
}
