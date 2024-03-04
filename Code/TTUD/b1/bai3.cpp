#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    vector<double> v;
    cout << "Nhap so phan tu trong day A[n] = ";
    cin >> n;
    double a;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> a;
        v.push_back(a);
    }

    cout << "Nhap k de tim ra phan tu nho thu k trong day A[n]: " << endl;
    do
    {
        cout << "k = ";
        cin >> k;
    } while (k < 0 || k >= n);

    sort(v.begin(), v.end(), greater<double>());
    cout << "Phan nho thu " << k << "trong day A[n] la: " << v[k];
}