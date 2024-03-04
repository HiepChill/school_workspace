#include <iostream>
#include <map>
using namespace std;

map<int, long long> nhap;
int brickbuild(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 3;

    return brickbuild(n - 1) + brickbuild(n - 2) * 2;
}

int main()
{
    int n;
    cout << "N = ";
    cin >> n;
    cout << "So phuong an = " << brickbuild(n);
}