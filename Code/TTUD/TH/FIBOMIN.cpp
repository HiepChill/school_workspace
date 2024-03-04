#include <iostream>
#include <algorithm>
using namespace std;

long long Fibo(long long k)
{
    long long f0 = 0, f1 = 1;
    if (k < 0)
        return f0;
    if (k == 0)
        return f1;
    long long fn = 1;
    while (fn <= k)
    {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }
    return fn;
}

int main()
{
    long long k;
    cin >> k;
    cout << Fibo(k);
}