#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<pair<int, int>, int> nhap;

const int m = 6;
const int n = 7;
// tìm độ dài lớn nhất của dãy con chung của 2 dãy
int A[m] = {3, 1, 2, 0, 4, 3};
int B[n] = {1, 2, 3, 4, 3, 2, 1};

int f(int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (nhap.count({m, n}) == 0)
        if (A[m - 1] == B[n - 1])
            nhap[{m, n}] = 1 + f(m - 1, n - 1);
        else
            nhap[{m, n}] = max(f(m - 1, n), f(m, n - 1));
    return nhap[{m, n}];
}

int main()
{
    cout << f(m, n);

    return 0;
}