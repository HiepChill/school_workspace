#include <iostream>
#include <algorithm>

using namespace std;

long long g(long long n)
{
    if (n > 0)
    {
        if (n == 1)
            return 1;
        if (n == 3)
            return 3;
        if (n % 2 == 0)
            return g(n / 2);
        if ((n - 1) % 4 == 0)
            return 2 * g(2 * (n - 1) / 4 + 1) - g((n - 1) / 4);
        if ((n - 3) % 4 == 0)
            return 3 * g(2 * (n - 3) / 4 + 1) - 2 * g((n - 3) / 4);
    }
}

int main()
{
    long long n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "g(" << n << ") = " << g(n);
}