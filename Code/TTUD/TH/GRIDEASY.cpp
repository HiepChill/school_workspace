#include <iostream>
#include <map>
using namespace std;

map<pair<int, int>, long long> nhap;

int luoi(int m, int n)
{
    if (n == 0 || m == 0)
        return 1;
    if (n == 1)
        return m + 1;
    if (m == 1)
        return n + 1;
    pair<int, int> key = make_pair(m, n);

    if (nhap.find(key) == nhap.end())
        nhap[key] = luoi(m - 1, n) + luoi(m, n - 1);

    return nhap[key];
}
int main()
{
    int n, m;
    cout << "Nhap M = ";
    cin >> m;
    cout << "Nhap N = ";
    cin >> n;
    cout << "So cach = " << luoi(m, n);
}