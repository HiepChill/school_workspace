#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int Fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n > 1)
        return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "So Fibonacci thu n la: " << Fibo(n);
}